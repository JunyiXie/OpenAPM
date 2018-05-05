//
//  OAPMServiceManager.m
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import "OAPMServiceManager.h"

@implementation OAPMServiceManager
+ (instancetype)shared {
  static dispatch_once_t onceToken;
  static OAPMServiceManager *instance = nil;
  dispatch_once(&onceToken, ^{
    instance = [OAPMServiceManager new];
  });
  return instance;
}
- (instancetype)init {
  if (self = [super init]) {
    _serviceDics = [NSMutableArray new];
  }
  return self;
}
- (void)addServiceDic:(NSDictionary *)serviceDic {
  [_serviceDics addObject:serviceDic];
}
- (id<OAPMServiceProtocol>)serviceSingletonFromProtocol:(Protocol *)protocol {
  NSString *protocolStr = NSStringFromProtocol(protocol);
  for (NSDictionary *dic in _serviceDics) {
    if (dic[protocolStr]) {
      Class<OAPMServiceProtocol> cls = NSClassFromString(dic[protocolStr]);
      return [cls shared];
    }
  }
  return nil;
}

@end
