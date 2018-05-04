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


- (void)start {
  NSLog(@"%@ start", self);
  [self startWithInterval:self.interval];
}




- (void)startWithInterval:(CGFloat)interval {
  [super startWithInterval:interval];
}

/// 随便写的回调，后续要加入合适的参数 返回值
- (void)timerCallBack {
  
  NSLog(@"CPUMonitor 产生的模块事件");
  [[OAPMManager shared].moduleEventTriger updateCPUNumber:@1];

}
#pragma mark - OAPMCPUMonitorServiceProtocol
- (id<OAPMCPURecordProtocol>)currentRecord {
  OAPMCPUMonitorRecord *record = [OAPMCPUMonitorRecord new];
  record.usage = 233;
  return record;
}
#pragma mark - OAPMCPUMonitorConfigurationProtocol

- (void)updateConfig:(id<OAPMConfigurationProtocol>)configuration {
  self.interval = ((id<OAPMCPUMonitorConfigurationProtocol>)configuration).interval;
  NSLog(@"OAPMCPUMonitor updateConfig %@", configuration);
}

@end
