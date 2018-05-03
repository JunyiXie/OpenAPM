//
//  HMDCPUMonitorServiceProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 30/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMRecordProtocol.h"
@protocol HMDCPUMonitorServiceProtocol <NSObject>

#pragma mark - Initiative



#pragma mark - Passive
- (void)cpuDataRecord:(id<OAPMCPURecordProtocol>)record;

@end
