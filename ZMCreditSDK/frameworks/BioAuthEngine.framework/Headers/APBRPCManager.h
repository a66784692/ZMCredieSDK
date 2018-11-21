//
//  APBRPCManager.h
//  BioAuthService
//
//  Created by yukun.tyk on 12/10/15.
//  Copyright © 2015 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  rpc结果回调
 *
 *  @param success 网络交互是否成功(不代表服务端返回的结果)
 *  @param result  服务端返回的结果
 */
typedef void (^rpcCompletionBlock)(BOOL success, NSObject *result);


@interface APBRPCManager : NSObject

/**
 *  当前是否有网络任务
 */
@property(nonatomic, readonly)BOOL isBusy;

/**
 *  上传采集数据
 *
 *  @param request 上传请求
 *  @param blk     上传结果回调处理，result为APBBisUploadGwResult
 */
- (void)upload:(NSObject *)request
withcompletionBlock:(rpcCompletionBlock)blk;

/**
 *  取消当前网络任务
 */
- (void)cancel;

@end
