//
//  LCFMonitorTime.h
//  LCFMonitorTimeTool
//
//  Created by lcf on 2019/4/28.
//  Copyright © 2019 lcf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LCFMonitorTime : NSObject

+ (nonnull instancetype)sharedMonitorTimer;

/*!
 *  启动监控
 */
- (void)startMonitoring;

/*!
 *  关闭监控
 */
- (void)closeMonitoring;

/*!
 *  打印方法耗时
 */
- (void)logAllCallStack;

/*!
 *  手动显示日志
 */
- (void)manualShowLog;

@end

@interface LCFMonitorTimeModel : NSObject

/// 方法名称
@property(nonatomic,copy) NSString *functionName;
/// 消耗时间
@property(nonatomic,assign) CGFloat consumeTime;
/// 方法地址
@property(nonatomic,copy) NSString *functionAddress;

@end

@interface UIViewController (LCFCommon)

+ (UIViewController *)currentViewController;

@end

NS_ASSUME_NONNULL_END
