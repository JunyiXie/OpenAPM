//
//  OAPMMonitorProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMRecordMessageSenderProtocol.h"
#import "OAPMConfigProtocol.h"
#import "OAPMModuleProtocol.h"

@protocol OAPMMonitorProtocol <NSObject,OAPMConfigProtocol,OAPMModuleProtocol>

@end
