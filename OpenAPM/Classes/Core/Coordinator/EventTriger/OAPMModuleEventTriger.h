//
//  OAPMModuleEventTriger
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//


#import <Foundation/Foundation.h>
#import "OAPMCPUEventListenerProtocol.h"

@interface OAPMModuleEventTriger : NSProxy<OAPMCPUEventListenerProtocol>
@property (nonatomic, weak, readonly) NSMutableArray *targets;
+ (instancetype)proxyWithTargets:(NSMutableArray *)targets;
@end

