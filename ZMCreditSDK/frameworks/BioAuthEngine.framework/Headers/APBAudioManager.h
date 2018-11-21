//
//  APBAudioManager.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 9/18/16.
//  Copyright © 2016 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APBAudioManager : NSObject

/**
 *  获取实例
 */
+ (APBAudioManager *)sharedInsance;

/**
 *  设置base url
 */
- (void)setBasePath:(NSString *)basePath;

/**
 *  播放声音
 *
 *  @param fileName 声音文件名称
 *  @param priority 声音优先级
 */
- (void)playAudio:(NSString *)fileName
     withPriority:(NSUInteger)priority;

/**
 *  是否正在播放声音
 */
- (BOOL)isPlaying;

/**
 *  暂停播放
 */
- (void)stop;

@end
