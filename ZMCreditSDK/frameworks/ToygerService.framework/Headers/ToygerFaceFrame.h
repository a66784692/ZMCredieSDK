//
//  ToygerFaceFrame.h
//  ToygerAlgorithm
//
//  Created by 王伟伟 on 2018/1/22.
//  Copyright © 2018年 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ToygerFrame.h"

@interface ToygerFaceFrame : ToygerFrame<NSCopying>

@property (nonatomic, assign) BOOL has_face;
@property (nonatomic, assign) int brightness;
@property (nonatomic, assign) int distance;
@property (nonatomic, assign) BOOL face_in_center;
@property (nonatomic, assign) BOOL is_moving;
@property (nonatomic, assign) BOOL good_quality;
@property (nonatomic, assign) BOOL good_pitch;
@property (nonatomic, assign) BOOL good_yaw;
@property (nonatomic, assign) CGFloat progress;

@end
