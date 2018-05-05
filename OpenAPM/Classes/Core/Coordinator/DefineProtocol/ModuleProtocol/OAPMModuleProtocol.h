//
//  OAPMModuleProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMConfigProtocol.h"
@protocol OAPMModuleProtocol <OAPMConfigProtocol>
+ (instancetype)shared;
- (void)start;

@end
