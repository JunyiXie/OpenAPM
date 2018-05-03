//
//  OAPMCPUMonitorRecord.h
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMCoordinatorProtocols.h"
@interface OAPMCPUMonitorRecord : NSObject<OAPMCPURecordProtocol>
@property (nonatomic, assign) NSTimeInterval timestamp;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, assign) NSTimeInterval inAppTime;
@property (nonatomic, assign) CGFloat usage;

@end
