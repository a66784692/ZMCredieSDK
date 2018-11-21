//
//  ToygerDocFrame.h
//  Toyger
//
//  Created by 王伟伟 on 2018/1/25.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ToygerFrame.h"

@interface ToygerDocFrame : ToygerFrame

/**
 错误码
 */
@property (nonatomic, assign) NSInteger error;

/**
 是否检测到证件
 */
@property (nonatomic, assign) BOOL cardDetected;

/**
 埋点使用的信息
 */
@property (nonatomic, copy) NSString *detailResult;

/**
 图像清晰度
 */
@property (nonatomic, assign) CGFloat sharpness;

/**
 帧的稳定性
 */
@property (nonatomic, assign) CGFloat stability;

@end
