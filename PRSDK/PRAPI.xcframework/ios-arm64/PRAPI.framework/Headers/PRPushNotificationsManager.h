//
//  PRPushNotificationsManager.h
//  PR-API
//
//  Created by Viacheslav Soroka on 8/29/19.
//  Copyright © 2019 NewspaperDirect. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PRPushNotificationsManager : NSObject

- (void)registerForNotifications:(BOOL)silently NS_SWIFT_NAME(registerForNotifications(silently:));
- (void)registerForSilentRemoteNotifications;
- (void)registerAppDelegateAsNotificationCenterDelegate;

@end

NS_ASSUME_NONNULL_END
