//
//  PRAppStyle+Theme.h
//  PR-UI
//
//  Created by berec on 14/12/2018.
//  Copyright © 2018 NewspaperDirect. All rights reserved.
//

#import "PRAppStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface PRAppStyle (Theme)

@property(nonatomic, class, readonly) PRTheme theme;
@property(nonatomic, class, readonly) PRTheme feedTheme;

@property(nonatomic, class, readonly) CGFloat thumbnailCornerRadius;

@end

@interface UIViewController (Theme)
@property (nonatomic, readonly) UIStatusBarStyle appropriateStatusBarStyle;
@end

NS_ASSUME_NONNULL_END
