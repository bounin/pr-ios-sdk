//
//  UIViewController+Presentation.h
//  PRiphone
//
//  Created by Jackie Cane on 6/21/13.
//  Copyright (c) 2013 NewspaperDirect. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Presentation)
@property (nonatomic, readonly) __kindof UIViewController *topMostController;
@property (nonatomic, readonly) __kindof UIViewController *topMostFullScreenController;
@property (nonatomic, readonly) __kindof UIViewController *bottomMostController;

@property (nonatomic, readonly) __kindof UIViewController *activeController;

@property (nullable, nonatomic, readonly) UINavigationController *ownNavigationController;

@property (nonatomic, readonly) UIModalPresentationStyle preferredModalPresentationStyle;

@property (nonatomic, readonly) BOOL canPresent;

@end

NS_ASSUME_NONNULL_END
