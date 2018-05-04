//
//  OAPMCpuMonitorConfiguration.h
//  OpenAPM
//
//  Created by 谢俊逸 on 1/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMConfigProtocol.h"

@interface OAPMCpuMonitorConfiguration : NSObject<OAPMCPUMonitorConfigurationProtocol>
@property (nonatomic, assign) CGFloat interval;
@property (nonatomic, strong) Protocol *protocol;
@end
