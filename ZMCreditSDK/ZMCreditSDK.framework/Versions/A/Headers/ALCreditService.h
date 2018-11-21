//
//  ALCreditService.h
//  SesameCreditMiniSDK
//
//  Created by leodi on 15/8/3.
//  Copyright (c) 2015年 SesameCredit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ALCreditService : NSObject

+(ALCreditService *)sharedService;

/***
 * 获取应用信息
 */
- (NSDictionary *)getMetaInfo;

/***
 * 启动服务
 * @param url
 * @param target 目标controller, 商户controller必须基于navigation controller
 * @param block 返回结果在resultDic的字典中
 */
- (void)startService:(NSString *)url
              target:(id)targetVC
               block:(void (^)(NSMutableDictionary * resultDic))block;
@end

