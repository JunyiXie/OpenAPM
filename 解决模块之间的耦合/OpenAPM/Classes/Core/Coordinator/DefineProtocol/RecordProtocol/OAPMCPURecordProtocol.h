//
//  OAPMCPURecordProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMRecordProtocol.h"
@protocol OAPMCPURecordProtocol <OAPMRecordProtocol>

@property (nonatomic, assign) CGFloat usage;

@end
