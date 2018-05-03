//
//  OAPMMonitor.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMCoordinatorProtocols.h"

@interface OAPMMonitor : NSObject
@property (nonatomic, strong) id<OAPMRecordMessageSenderProtocol> messageSender;

@end
