//
//  OAPMCPUMonitor.m
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import "OAPMCPUMonitor.h"
#import "OAPMCPUMonitorRecord.h"
@OAPMMod(OAPMCPUMonitor)
@OAPMService(OAPMCPUMonitorServiceProtocol, OAPMCPUMonitor)
@implementation OAPMCPUMonitor

+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMCPUMonitor *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMCPUMonitor new];
  });
  return instance;
}

- (void)updateConfiguration:(id<OAPMConfigurationProtocol>)configuration {
  
}

- (void)start {
  NSLog(@"%@ start", self);
  [self startWithInterval:1];
}

- (void)startWithInterval:(CGFloat)interval {
  [super startWithInterval:interval];
}
- (void)timerCallBack {
  [[OAPMManager shared].moduleEventTriger updateCPUNumber:@1];

}
#pragma mark - OAPMCPUMonitorServiceProtocol
- (id<OAPMCPURecordProtocol>)currentRecord {
  OAPMCPUMonitorRecord *record = [OAPMCPUMonitorRecord new];
  record.usage = 233;
  return record;
}

@end
