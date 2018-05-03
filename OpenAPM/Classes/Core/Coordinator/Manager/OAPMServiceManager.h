//
//  OAPMServiceManager.h
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import <Foundation/Foundation.h>
#import "OAPMCoordinatorProtocols.h"

@interface OAPMServiceManager: NSObject
{
  NSMutableArray<NSDictionary *> *_serviceDics;
}
+ (instancetype)shared;
- (id<OAPMServiceProtocol>)serviceSingletonFromProtocol:(Protocol *)protocol;
- (void)addServiceDic:(NSDictionary *)serviceDic;
@end

