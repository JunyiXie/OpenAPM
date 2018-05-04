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
    // 触发配置
    [[OAPMManager shared] updateConfigs:[[OAPMConfig shared] configurations]];
    // 触发Event
    [[OAPMManager shared]  trigerManagerEvent:ModuleStart];
  }
  return self;
}

@end
