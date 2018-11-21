//
//  ZIMResponse.h
//  ZolozIdentityManager
//
//  Created by yukun.tyk on 28/06/2017.
//  Copyright © 2017 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ZIMResponseCode) {
    ZIMResponseSuccess = 1000,
    ZIMInternalError = 1001,
    ZIMInterrupt = 1003,
    ZIMNetworkfail = 2002,
    ZIMResponseFail = 2006,
};

@interface ZIMResponse : NSObject

@property(nonatomic, assign, readonly)ZIMResponseCode code;
@property(nonatomic, assign, readonly)ZIMResponseCode retCode;
@property(nonatomic, copy, readonly)NSString *reason;
@property(nonatomic, copy, readonly)NSString *retCodeSub;
@property(nonatomic, copy, readonly)NSString *retMessageSub;
@property(nonatomic, strong, readonly)NSDictionary *extInfo;
@property(nonatomic, strong, readonly)NSString * bizData;



-(instancetype)initWithResponseCode:(ZIMResponseCode) code
                            retCode:(ZIMResponseCode) retCode
                         retCodeSub:(NSString *) retCodeSub
                      retMessageSub:(NSString *) retMessageSub
                             reason:(NSString *) reason
                           extParam:(NSDictionary *) extInfo
                            bizData:(NSString *) bizData;

@end
