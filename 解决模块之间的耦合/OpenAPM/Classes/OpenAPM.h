//
//  OpenAPM.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMCoordinatorProtocols.h"
#import "OAPMManager.h"
#import "OAPMCPUMonitor.h"
#import "OAPMModuleEventTriger.h"

@interface OpenAPM : NSObject
+ (instancetype)shared;
@end
