//
//  OAPMConfigEvent.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>




#pragma mark Configuration
@protocol OAPMConfigurationProtocol<NSObject>

@end
#pragma mark - Monitor Configuration

@protocol OAPMMonitorConfigurationProtocol<OAPMConfigurationProtocol>
@end

#pragma mark - Timer Monitor Configuration

@protocol OAPMTimerMonitorConfigurationProtocol<OAPMMonitorConfigurationProtocol>
@property (nonatomic,assign) CGFloat interval;
@end

@protocol OAPMCPUMonitorConfigurationProtocol<OAPMTimerMonitorConfigurationProtocol>
@end



@protocol OAPMConfigEvent <NSObject>

- (void)startWithConfiguration:(id<OAPMConfigurationProtocol>)configuration;
- (void)endWithConfiguration:(id<OAPMConfigurationProtocol>)configuration;

@end
