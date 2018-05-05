//
//  OAPMCpuMonitorProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMMonitorProtocol.h"
@protocol OAPMCpuMonitorProtocol <OAPMMonitorProtocol>
@property (nonatomic, assign) CGFloat interval;

@end
