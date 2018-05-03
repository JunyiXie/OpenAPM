//
//  OAPMCPUEventListenerProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 2/5/2018.
//

#import <Foundation/Foundation.h>

@protocol OAPMCPUEventListenerProtocol <NSObject>

- (void)updateCPUNumber:(NSNumber *)number;

@end
