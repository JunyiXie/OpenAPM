#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "OAPMConfig.h"
#import "OAPMCpuMonitorConfiguration.h"
#import "OAPMConfigProtocol.h"
#import "OAPMRecordMessageSenderProtocol.h"
#import "OAPMCpuMonitorProtocol.h"
#import "OAPMMemoryMonitorProtocol.h"
#import "OAPMModuleProtocol.h"
#import "OAPMMonitorProtocol.h"
#import "OAPMUITrackerProtocol.h"
#import "OAPMCPURecordProtocol.h"
#import "OAPMRecordProtocol.h"
#import "OAPMServiceProtocol.h"
#import "OAPMCPUEventListenerProtocol.h"
#import "OAPMCPUMonitorServiceProtocol.h"
#import "OAPMManagerEventTriger.h"
#import "OAPMModuleEventTriger.h"
#import "OAPMManager.h"
#import "OAPMModuleManager.h"
#import "OAPMServiceManager.h"
#import "OAPMCoordinatorProtocols.h"
#import "OAPMMonitor.h"
#import "OAPMCPUMonitor.h"
#import "OAPMCPUMonitorRecord.h"
#import "OAPMMemoryMonitor.h"
#import "OAPMTimerMonitor.h"
#import "OpenAPM-Private.h"
#import "OpenAPM.h"


FOUNDATION_EXPORT double OpenAPMVersionNumber;
FOUNDATION_EXPORT const unsigned char OpenAPMVersionString[];

