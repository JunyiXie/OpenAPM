//
//  OAPMModuleManager.m
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import "OAPMModuleManager.h"

@implementation OAPMModuleManager

+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMModuleManager *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMModuleManager new];
  });
  return instance;
}

- (instancetype)init {
  if (self = [super init]) {
    _moduleClss = [NSMutableArray new];
  }
  return self;
}

- (void)addModuleCls:(Class<OAPMModuleProtocol>)cls {
  [_moduleClss addObject:cls];
}

- (id<OAPMModuleProtocol>)moduleSingletonFromProtocol:(Protocol *)protocol {
  for (id<OAPMModuleProtocol> module in _moduleClss) {
    if ([module conformsToProtocol:protocol]) {
      return [module shared];
    }
  }
  return nil;
}

- (NSMutableArray<id<OAPMModuleProtocol>> *)allSharedModuleInstances {
  NSMutableArray<id<OAPMModuleProtocol>> * modules = [NSMutableArray new];
  for (id<OAPMModuleProtocol> moduleCls in _moduleClss) {
    [modules addObject:[moduleCls shared]];
  }
  return modules;
}

@end

