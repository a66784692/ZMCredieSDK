//
//  ZIMIdentityManager.h
//  ZolozIdentityManager
//
//  Created by richard on 31/10/2017.
//  Copyright © 2017 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>


//ext params keys
extern NSString *const kZIMInitOperationTypeKey;        //init operation type
extern NSString *const kZIMValidateOperationTypeKey;    //validate operation type
extern NSString *const kZIMGatewayURLKey;               //rpc gateway url
extern NSString *const kZIMRpcHeaderKey;                //ext rpc header
extern NSString *const kZIMCurrentViewControllerKey;    // current view controller
extern NSString *const kZIMFastUploadKey;
extern NSString *const kZIMBisProtocolKey;
@class ZIMResponse;

typedef void (^ZIMCallback)(ZIMResponse *response);

@interface ZolozIdentityManager : NSObject


+ (ZolozIdentityManager *)sharedInstance;

/* standard verification
 * @param ZIMId: unique id to identity one verification transaction
 * @param params: some custom parameter that biz can specify
 * @param callback: block triggered when verification is finished
 */

- (void)verifyWith:(NSString *)zimId
         extParams:(NSDictionary *)params
      onCompletion:(ZIMCallback)callback;

+ (NSDictionary *)getMetaInfo;

+ (NSString *)version;
@end

