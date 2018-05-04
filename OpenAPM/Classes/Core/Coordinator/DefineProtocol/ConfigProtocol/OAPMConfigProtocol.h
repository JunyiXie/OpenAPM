//
//  OAPMConfigProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>




#pragma mark Configuration
@protocol OAPMConfigurationProtocol<NSObject>

/// 当前的protocol 保留protocol 信息
@property (nonatomic,strong) Protocol* protocol;

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



@protocol OAPMConfigProtocol <NSObject>

- (void)updateConfig:(id<OAPMConfigurationProtocol>)configuration;

@end
