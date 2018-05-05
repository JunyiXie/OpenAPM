//
//  OAPMModuleManager.h
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMCoordinatorProtocols.h"

@interface OAPMModuleManager: NSObject
{
  NSMutableArray<id<OAPMModuleProtocol>> *_moduleClss;
}
+ (instancetype)shared;
- (void)addModuleCls:(Class<OAPMModuleProtocol>)cls;
- (id<OAPMModuleProtocol>)moduleSingletonFromProtocol:(Protocol *)protocol;
- (NSMutableArray<id<OAPMModuleProtocol>> *)allSharedModuleInstances;

@end
