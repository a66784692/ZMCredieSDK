//
//  APBSystem.h
//  BioAuthService
//
//  Created by yukun.tyk on 12/14/15.
//  Copyright © 2015 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  手机型号
 */
typedef NS_ENUM(NSInteger, APBModel)
{
    MODEL_UNDEIFIEND =      -1,
    MODEL_SIMULATOR =       100,

    MODEL_IPAD1 =           211,
    MODEL_IPAD2 =           221,
    MODEL_IPAD_MINI =       225,
    MODEL_IPAD3 =           231,
    MODEL_IPAD4 =           234,
    MODEL_IPAD_AIR =        241,
    MODEL_IPAD_MINI2 =      244,
    MODEL_IPAD_AIR2 =       253,
    MODEL_IPAD_HIGHER =     290,
    
    MODEL_IPOD1 =           311,
    MODEL_IPOD2 =           321,
    MODEL_IPOD3 =           331,
    MODEL_IPOD4 =           341,
    MODEL_IPOD5 =           351,
    MODEL_IPOD6 =           371,
    MODEL_IPOD_HIGHER =     390,
    
    MODEL_IPHONE1G =        411,
    MODEL_IPHONE3G =        412,
    MODEL_IPHONE3GS =       421,
    MODEL_IPHONE4 =         431,
    MODEL_IPHONE4S =        441,
    MODEL_IPHONE5 =         451,
    MODEL_IPHONE5C =        453,
    MODEL_IPHONE5S =        461,
    MODEL_IPHONE6P =        471,
    MODEL_IPHONE6 =         472,
    MODEL_IPHONE6S =        481,
    MODEL_IPHONE6SP =       482,
    MODEL_IPHONE_HIGHER =   490,
};

@interface APBSystem : NSObject

+ (BOOL)cameraPermissionGranted;

+ (BOOL)microphonePermissionGranted;

+ (double)systemVer;

+ (NSString *)modelString;

+ (APBModel)MobileModel;

@end
