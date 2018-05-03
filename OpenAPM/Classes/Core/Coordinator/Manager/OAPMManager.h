//
//  OAPMManager.h
//  OpenAPM
//
//  Created by 谢俊逸 on 1/5/2018.
//

#import <Foundation/Foundation.h>
#include <mach-o/getsect.h>
#include <mach-o/loader.h>
#include <mach-o/dyld.h>
#include <dlfcn.h>
#import <objc/runtime.h>
#import <objc/message.h>
#include <mach-o/ldsyms.h>
#import "OAPMServiceProtocol.h"
#import "OAPMModuleProtocol.h"


#ifndef BeehiveModSectName

#define BeehiveModSectName "BeehiveMods"

#endif

#ifndef BeehiveServiceSectName

#define BeehiveServiceSectName "BeehiveServices"

#endif


#define BeeHiveDATA(sectname) __attribute((used, section("__DATA,"#sectname" ")))



#define BeeHiveMod(name) \
class OpenAPM; char * k##name##_mod BeeHiveDATA(BeehiveMods) = ""#name"";

#define BeeHiveService(servicename,impl) \
class OpenAPM; char * k##servicename##_service BeeHiveDATA(BeehiveServices) = "{ \""#servicename"\" : \""#impl"\"}";

#pragma mark - 事件触发
typedef NS_ENUM(NSInteger, OAPMModuleEvent)
{
  ModuleStart = 1,
};

@class OAPMModuleEventTriger;
@interface OAPMManager : NSObject

+ (instancetype)shared;
- (id<OAPMModuleProtocol>)moduleFromProtocol:(Protocol *)protocol;
- (id<OAPMServiceProtocol>)serviceFromProtocol:(Protocol *)protocol;
@property (nonatomic, strong)  OAPMModuleEventTriger *moduleEventTriger;




- (void)trigerEvent:(OAPMModuleEvent)event;

@end
