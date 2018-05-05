//
//  OAPMRecordProtocol.h
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import <Foundation/Foundation.h>

@protocol OAPMRecordProtocol <NSObject>

@property (nonatomic, assign) NSTimeInterval timestamp;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic, assign) NSTimeInterval inAppTime;

@end



