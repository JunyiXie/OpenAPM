//
//  OAPMModuleEventTriger
//  OpenAPM
//
//  Created by 谢俊逸 on 3/5/2018.
//

#import "OAPMModuleEventTriger.h"
#import <objc/message.h>
@implementation OAPMModuleEventTriger
{
}
- (instancetype)initWithTargets:(NSMutableArray *)targets {
  _targets = targets;
  return self;
}

+ (instancetype)proxyWithTargets:(NSMutableArray *)targets {
  return [[self alloc] initWithTargets:targets];
}


- (NSMethodSignature *)methodSignatureForSelector:(SEL)sel {
  for (id target in _targets) {
    if ([target respondsToSelector:sel]) {
      return [target methodSignatureForSelector:sel];
    }
  }
  return [NSMethodSignature signatureWithObjCTypes:"v@:@"];
}

/// not in main queue
- (void)forwardInvocation:(NSInvocation *)invocation {
  SEL sel = invocation.selector;
  for (id target in _targets) {
    if ([target respondsToSelector:sel]) {
      dispatch_async(dispatch_get_global_queue(0, 0), ^{
        [invocation invokeWithTarget:target];
      });
    }
  }
}

@end
