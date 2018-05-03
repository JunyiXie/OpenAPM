//
//  OAPMEventManager.m
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import "OAPMManagerEventTriger.h"

@implementation OAPMManagerEventTriger

+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMManagerEventTriger *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMManagerEventTriger new];
  });
  return instance;
}
- (void)trigerStartEventForModules:(NSMutableArray<id<OAPMModuleProtocol>> *)modules{
  for (id<OAPMModuleProtocol> module in modules) {
    [module start];
  }
}



@end
