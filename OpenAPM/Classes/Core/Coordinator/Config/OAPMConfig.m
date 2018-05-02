//
//  OAPMConfig.m
//  OpenAPM
//
//  Created by 谢俊逸 on 1/5/2018.
//

#import "OAPMConfig.h"
#import "OAPMCpuMonitorConfiguration.h"
@implementation OAPMConfig

+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMConfig *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMConfig new];
  });
  return instance;
}

- (void)trigerStartEventForModuleClss:(NSMutableArray<id<OAPMModuleProtocol>> *)moduleClss {
  
}


- (NSMutableArray<id<OAPMConfigurationProtocol>> *)modules {
  OAPMCpuMonitorConfiguration *cpuConfiguration = [OAPMCpuMonitorConfiguration new];
  cpuConfiguration.interval = 1;
  return [NSMutableArray arrayWithObjects:cpuConfiguration, nil];
}

@end
