//
//  APBDeviceInfo.h
//  BioAuthEngine
//
//  Created by 晗羽 on 28/02/2018.
//  Copyright © 2018 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APBDeviceInfo : NSObject

+ (instancetype)getInstance;

//获取语言类型
- (NSInteger)languageCode;

//在某些未初始化设备指纹的地方提供初始化接口
- (void)initDeviceInfo;

//获取apdidtoken
- (NSString *)getApdidToken;

@end
