//
//  OpenAPM.m
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import "OpenAPM.h"
#import "OAPMManager.h"

@implementation OpenAPM

+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OpenAPM *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OpenAPM new];
  });
  return instance;
}

- (instancetype)init {
  if (self = [super init]) {
    
    // 做个初始化 读取module
    [OAPMManager shared];
    
    
    
//    [[OAPM shareInstance] setContext:[BHContext shareInstance]];
//    [[OAPM shareInstance] ]

//    [[BHModuleManager sharedManager] registerCustomEvent:OAPMStartEvent andSelectorStr:@"startWithConfiguration:"];
//    [OAPM triggerCustomEvent:OAPMStartEvent];
  }
  return self;
}

@end
