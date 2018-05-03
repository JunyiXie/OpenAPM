//
//  OAPMMemoryMonitor.m
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import "OAPMMemoryMonitor.h"
@BeeHiveMod(OAPMMemoryMonitor)
@implementation OAPMMemoryMonitor

- (void)updateConfiguration:(id<OAPMConfigurationProtocol>)configuration {
}
+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMMemoryMonitor *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMMemoryMonitor new];
  });
  return instance;
}
- (void)start {
}

- (void)updateCPUNumber:(NSNumber *)number {
  NSLog(@"OAPMCPUEventListen updateCPUNumber %@", number);
}
@end
