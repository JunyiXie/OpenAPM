//
//  OAPMMemoryMonitor.h
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import <OpenAPM/OpenAPM.h>
#import "OAPMCoordinatorProtocols.h"
#import "OAPMServiceManager.h"
@interface OAPMMemoryMonitor : OAPMTimerMonitor<OAPMMemoryMonitorProtocol, OAPMCPUEventListenerProtocol>

@end
