//
//  APBGyrometerService.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 8/26/16.
//  Copyright © 2016 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CGBase.h>

@protocol APBGyrometerDelegate <NSObject>

@optional
/**
 *  陀螺仪角度更新
 *
 *  @param angle 垂直角度，角度制
 */
- (void)onGyrometerDataUpdate:(CGFloat)angle;

@end

@interface APBGyrometerService : NSObject

/**
 *  开始检测陀螺仪角度
 */
- (void)start;

/**
 *  暂停检测陀螺仪角度
 */
- (void)stop;

/**
 *  获取当前陀螺仪角度
 *
 *  @return 与地面垂直角度，角度制
 */
- (CGFloat)currentAngle;

/**
 *  设置delegate
 */
- (void)setDelegate:(id<APBGyrometerDelegate>)delegate;

@end
