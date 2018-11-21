//
//  UIScreen+bioAuth.h
//  BioAuthEngine
//
//  Created by 王伟伟 on 2017/8/24.
//  Copyright © 2017年 Alipay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (bioAuth)

+ (CGFloat)bioAuth_screenScale;
- (CGRect)bioAuth_boundsForOrientation:(UIInterfaceOrientation)orientation;

@end
