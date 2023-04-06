//
//  PRMenuItemCommand.h
//  PR-API
//
//  Created by berec on 23/11/2018.
//  Copyright © 2018 NewspaperDirect. All rights reserved.
//

#import "PRMenuItem.h"
#import <PRUIKit/PRCommandNames.h>

NS_ASSUME_NONNULL_BEGIN

@class PRCommand;

@interface PRCommandMenuItem : PRMenuItem

+ (instancetype)itemWithCommand:(PRCommandName)commandName
                          title:(NSString *)title
                        details:(nullable NSString *)details
                       iconName:(nullable NSString *)iconName;

+ (instancetype)itemWithCommand:(PRCommandName)commandName
                          title:(NSString *)title
                        details:(nullable NSString *)details
                       iconName:(nullable NSString *)iconName
                     parameters:(nullable NSDictionary *)data
                        context:(nullable NSString *)context;

@property (nonatomic, copy, readonly) PRCommandName command;
@property (nonatomic, copy, readonly) NSString *context;

@property (nonatomic, readonly) PRCommand *prCommand;
@property (nonatomic, readonly) BOOL commandEnabled;

@end

NS_ASSUME_NONNULL_END
