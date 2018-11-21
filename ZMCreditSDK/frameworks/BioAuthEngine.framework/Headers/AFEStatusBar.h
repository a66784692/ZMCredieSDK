//
//  AFEStatusBar.h
//  FaceEyePrint
//
//  Created by yukun.tyk on 12/17/15.
//  Copyright © 2015 Alipay. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol IStatusBarDelegate <NSObject>
- (void)onButtonCancel;
@optional
- (void)onSoundStatusChanged:(BOOL)newStatus;
@end

@interface AFEStatusBar : UIView

- (void)onButtonCancel;

- (void)showSoundStatus:(BOOL)status;

- (void)setDelegate:(id<IStatusBarDelegate>)delegate;

- (void)setTransparent:(CGFloat) alpha;


- (void)setTitle:(NSString *)title;

- (void)setSoundButtonHidden:(BOOL)hidden;
- (void)setCancelButtonHidden:(BOOL)hidden;


@end
