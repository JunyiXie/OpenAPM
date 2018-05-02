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
#import "OAPMRecordProtocol.h"
#import "OAPMRecordMessageSenderProtocol.h"
#import "OAPMModuleProtocol.h"
#import "OAPMMonitorProtocol.h"
#import "OAPMCPUMonitorServiceProtocol.h"
#import "OAPMServiceProtocol.h"
#import "OAPMManager.h"
#import "OAPMCoordinatorProtocols.h"
#import "OAPMMonitor.h"
#import "OAPMTimerMonitor.h"
#import "OpenAPM-Private.h"
#import "OpenAPM.h"

FOUNDATION_EXPORT double OpenAPMVersionNumber;
FOUNDATION_EXPORT const unsigned char OpenAPMVersionString[];

