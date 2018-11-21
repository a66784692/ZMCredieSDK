//
//  APBMotionService.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 10/11/2016.
//  Copyright © 2016 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreMotion/CoreMotion.h>

typedef struct APBAttitude_t{
    float pitch;
    float yaw;
    float roll;
    
    APBAttitude_t(float p = 0, float y = 0, float r = 0){
        pitch = p;
        yaw = y;
        roll = r;
    }
    
}APBAttitude;

@protocol APBMotionServiceDelegate <NSObject>

- (void)accelerationDidUpdate:(CMAcceleration)acceleration;
- (void)gyrometerDidUpdate:(CMRotationRate)rotation;
- (void)magneticDidUpdate:(CMMagneticField)magnetic;
- (void)attitudeDidUpdate:(APBAttitude)attitude;

@end

@interface APBMotionService : NSObject

@property(nonatomic, assign, readonly)CMAcceleration acceleration;
@property(nonatomic, assign, readonly)CMRotationRate rotation;
@property(nonatomic, assign, readonly)CMMagneticField magnetic;
@property(nonatomic, assign, readonly)APBAttitude attitude;

- (void)setDelegate:(id<APBMotionServiceDelegate>)delegate;

- (void)updateWithIntervalForAccelerometer:(NSTimeInterval)acceleroInterval
                              gyroInterval:(NSTimeInterval)gyroInterval
                           magnetoInterval:(NSTimeInterval)magnetInterval
                          attitudeInterval:(NSTimeInterval)attitudeInterval;

- (void)stopUpdate;

@end
