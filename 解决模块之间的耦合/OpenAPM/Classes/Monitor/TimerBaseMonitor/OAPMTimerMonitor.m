//
//  OAPMTimerMonitor.m
//  OpenAPM
//
//  Created by 谢俊逸 on 29/4/2018.
//

#import "OAPMTimerMonitor.h"

@interface OAPMTimerMonitor()
{
  dispatch_source_t _timer;
}
@end


@implementation OAPMTimerMonitor
static void *monitor_queue_key = &monitor_queue_key;
static void *monitor_queue_context = &monitor_queue_context;

dispatch_queue_t oapm_get_monitor_queue(void)
{
  static dispatch_queue_t monitor_queue = nil;
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    monitor_queue = dispatch_queue_create("com.bytedance.heimdallr.monitor", 0);
    dispatch_queue_set_specific(monitor_queue, monitor_queue_key, monitor_queue_context, 0);
  });
  return monitor_queue;
}

#pragma mark timer

- (void)startWithInterval:(CGFloat)interval {
  if (!_timer) {
    _interval = interval;
    _timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER, 0, 0, oapm_get_monitor_queue());
    dispatch_source_set_timer(_timer, DISPATCH_TIME_NOW, _interval * NSEC_PER_SEC, 0 * NSEC_PER_SEC);
    dispatch_source_set_event_handler(_timer, ^{
      [self timerCallBack];
    });
    dispatch_resume(_timer);
  } else {
    if (interval != _interval) {
      _interval = interval;
      dispatch_source_set_timer(_timer, DISPATCH_TIME_NOW, _interval * NSEC_PER_SEC, 0 * NSEC_PER_SEC);
    }
  }
}

- (void)timerEnd {
  if (_timer) {
    dispatch_source_cancel(_timer);
    _timer = nil;
  }
}

- (void)timerCallBack {
  
}





@end
