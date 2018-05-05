//
//  OAPMTimerMonitor.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMCoordinatorProtocols.h"
#import "OAPMMonitor.h"

@interface OAPMTimerMonitor : OAPMMonitor
@property (nonatomic, assign) CGFloat interval;
- (void)timerCallBack;
- (void)startWithInterval:(CGFloat)interval;
@end
