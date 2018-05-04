//
//  OAPMCPUMonitor.h
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import <OpenAPM/OpenAPM.h>

#import "OAPMCoordinatorProtocols.h"
#import "OAPMTimerMonitor.h"



@interface OAPMCPUMonitor : OAPMTimerMonitor<OAPMCpuMonitorProtocol, OAPMCPUMonitorServiceProtocol>
- (id<OAPMCPURecordProtocol>)currentRecord;


@end
