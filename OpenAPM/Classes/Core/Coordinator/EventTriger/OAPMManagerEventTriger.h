//
//  OAPMEventManager.h
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMModuleProtocol.h"

@interface OAPMManagerEventTriger : NSObject
+ (instancetype)shared;
- (void)trigerStartEventForModules:(NSMutableArray<id<OAPMModuleProtocol>> *)modules;
@end
