//
//  OAPMConfig.h
//  OpenAPM
//
//  Created by 谢俊逸 on 1/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMConfigProtocol.h"
#import "OAPMModuleProtocol.h"

@interface OAPMConfig : NSObject
+ (instancetype)shared;
- (void)trigerStartEventForModuleClss:(NSMutableArray<id<OAPMModuleProtocol>> *)modules;
@property (nonatomic, strong) NSMutableArray<id<OAPMConfigurationProtocol>> *modules;
@end
