//
//  OAPMConfig.m
//  OpenAPM
//
//  Created by 谢俊逸 on 1/5/2018.
//

#import "OAPMConfig.h"
#import "OAPMCpuMonitorConfiguration.h"
#import "OAPMCpuMonitorProtocol.h"
@implementation OAPMConfig

+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMConfig *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMConfig new];
  });
  return instance;
}



/// 暂时这样写，替换为remote 数据解析.
- (NSMutableArray<id<OAPMConfigurationProtocol>> *)configurations {
  OAPMCpuMonitorConfiguration *cpuConfiguration = [OAPMCpuMonitorConfiguration new];
  cpuConfiguration.interval = 1;
  cpuConfiguration.protocol = @protocol(OAPMCpuMonitorProtocol);
  return [NSMutableArray arrayWithObjects:cpuConfiguration, nil];
}

@end
