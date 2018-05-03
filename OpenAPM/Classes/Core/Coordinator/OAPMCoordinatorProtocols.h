//
//  OAPMCoordinatorProtocols.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>

/// 内部协议暴露

#pragma mark - Config
#import "OAPMConfigProtocol.h"

#pragma mark - Record
#import "OAPMRecordProtocol.h"
#import "OAPMCPURecordProtocol.h"

#import "OAPMRecordMessageSenderProtocol.h"


#pragma mark - Monitor
#import "OAPMCpuMonitorProtocol.h"
#import "OAPMMemoryMonitorProtocol.h"
#import "OAPMMonitorProtocol.h"

#pragma mark - Service
#import "OAPMCPUEventListenerProtocol.h"
#import "OAPMCPUMonitorServiceProtocol.h"
#import "OAPMServiceProtocol.h"
