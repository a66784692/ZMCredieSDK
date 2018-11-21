//
//  APBUploadContent.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 8/26/16.
//  Copyright © 2016 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "APBConfig.h"

//face upload content, PB format defination

#ifdef SUPPORT_PB

#import <APProtocolBuffers/ProtocolBuffers.h>

@interface BisFaceContent : APDPBGeneratedMessage

@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasContentBytes;
@property (readonly) BOOL hasRectx;
@property (readonly) BOOL hasRecty;
@property (readonly) BOOL hasWidth;
@property (readonly) BOOL hasHeight;
@property (readonly) BOOL hasQuality;
@property (readonly) BOOL hasTaskidx;

@property (nonatomic,strong) NSString* content ;
@property (nonatomic,strong) NSData* contentBytes ;
@property (nonatomic) SInt32 rectx ;
@property (nonatomic) SInt32 recty ;
@property (nonatomic) SInt32 width ;
@property (nonatomic) SInt32 height ;
@property (nonatomic) SInt32 quality ;
@property (nonatomic) SInt32 taskidx ;
@end
//face upload content defination, JSON format
#else

@interface BisFaceContent : NSObject

@property(nonatomic, strong)NSString * content;
@property(nonatomic, strong)NSString * rectx;
@property(nonatomic, strong)NSString * recty;
@property(nonatomic, strong)NSString * width;
@property(nonatomic, strong)NSString * height;
@property(nonatomic, strong)NSString * quality;
@property(nonatomic, strong)NSString * taskidx;

@end

#endif
