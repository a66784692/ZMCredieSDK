//
//  APBLogger.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 12/8/15.
//  Copyright © 2015 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APBConfig.h"



extern NSString *const kDebugNotiName;      //log信息发送的通知名称


#define __FILE_NAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#ifdef DEBUG            //debug
//    std::cout<<"\n[BIOAUTH]:" << [[NSString stringWithFormat:fmt, ##__VA_ARGS__]cStringUsingEncoding:NSUTF8StringEncoding]        \
//    <<", function:" << __PRETTY_FUNCTION__ << ", file:" << __FILE_NAME__ << ", line:" << __LINE__ << ", date:" <<               \
//    __DATE__ << ", time:" <<__TIME__<<std::endl;
    #define BIOAUTH_LOG(fmt, ...)                                                                                               \
    {                                                                                                                           \
        NSLog(@"[BIOAUTH]: %@, function:%s, file:%s, line:%d, date:%s, time:%s",\
        [NSString stringWithFormat:fmt, ##__VA_ARGS__], __PRETTY_FUNCTION__, __FILE_NAME__, __LINE__, __DATE__, __TIME__);\
    }

    #ifdef ALIPAY       //debug and alipay
//
        #define LOG_DBG(fmt, ...)       BIOAUTH_LOG(fmt, ##__VA_ARGS__); 
//APLogDebug(@"[BIOAUTH]", fmt, ##__VA_ARGS__);
//        #define LOG_INFO(fmt, ...)      APLogInfo(@"[BIOAUTH]", fmt, ##__VA_ARGS__); BIOAUTH_LOG(fmt, ##__VA_ARGS__);
//        #define LOG_ERROR(fmt, ...)     APLogError(@"[BIOAUTH]", fmt, ##__VA_ARGS__); BIOAUTH_LOG(fmt, ##__VA_ARGS__);

    #else               //debug and not alipay

        #define LOG_DBG(fmt, ...)       BIOAUTH_LOG(fmt, ##__VA_ARGS__);
        #define LOG_INFO(fmt, ...)      BIOAUTH_LOG(fmt, ##__VA_ARGS__);
        #define LOG_ERROR(fmt, ...)     BIOAUTH_LOG(fmt, ##__VA_ARGS__);

    #endif

#else                   //release

    #ifdef ALIPAY       //release and alipay

        #define LOG_DBG(fmt, ...)
//        #define LOG_INFO(fmt, ...)      APLogInfo(@"[BIOAUTH]", fmt, ##__VA_ARGS__);
//        #define LOG_ERROR(fmt, ...)     APLogError(@"[BIOAUTH]", fmt, ##__VA_ARGS__);

    #else               //release and not alipay

        #define LOG_DBG(fmt, ...)
        #define LOG_INFO(fmt, ...)
        #define LOG_ERROR(fmt, ...)
    #endif

#endif


@interface APBLogMonitor : NSObject
#ifdef DEBUG

+ (instancetype)sharedInstance;

/**
 *  开始监控日志
 */
- (void)beginMonitor;

/**
 *  停止监控日志
 */
- (void)stopMonitor;

/**
 *  返回格式化的log
 */
- (NSString *)formattedLog;

/**
 *  存储到本地(documents下)
 */
- (void)save;

- (void)clearMemLog;

- (void)clearDiskLog;

/**
 *  检查事件是否按照预期结果触发，同步函数
 *
 *  @param events  预期触发的事件
 *  @param ordered 事件是否要按顺序触发
 *  @param blk     检查结果
 */
- (void)checkEventList:(NSArray <NSString *> *)events
             isOrdered:(BOOL)ordered
       completionBLock:(void(^)(BOOL success, NSString *failEvent))blk;

//手否包含某条log
- (BOOL)hasLogId:(NSString *)logId;

#endif
@end

