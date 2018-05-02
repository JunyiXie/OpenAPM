//
//  OAPMTimerMonitorProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMMonitorProtocol.h"
@protocol OAPMTimerMonitorProtocol <OAPMMonitorProtocol>

@property (nonatomic, assign) CGFloat interval;

@end
