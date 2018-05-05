//
//  HMDCPUMonitorServiceProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 30/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMRecordProtocol.h"
#import "OAPMCPURecordProtocol.h"
#import "OAPMServiceProtocol.h"
@protocol OAPMCPUMonitorServiceProtocol <OAPMServiceProtocol>

- (id<OAPMCPURecordProtocol>)currentRecord;

@end
