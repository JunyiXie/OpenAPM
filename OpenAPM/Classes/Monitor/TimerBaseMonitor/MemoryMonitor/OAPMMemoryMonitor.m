//
//  OAPMMemoryMonitor.m
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import "OAPMMemoryMonitor.h"
@OAPMMod(OAPMMemoryMonitor)
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

#pragma mark - OAPMCPUEventListenerProtocol
- (void)updateCPUNumber:(NSNumber *)number {
  NSLog(@"OAPMCPUEventListen updateCPUNumber %@", number);
  
  // service
  id<OAPMCPUMonitorServiceProtocol> cpuservice = [[OAPMServiceManager shared] serviceSingletonFromProtocol:@protocol(OAPMCPUMonitorServiceProtocol)];
  id<OAPMCPURecordProtocol> record = [cpuservice currentRecord];
  NSLog(@"record: %@", record);
}
@end
