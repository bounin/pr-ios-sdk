//
//  NSError+Initialization.h
//  PRUtils
//
//  Created by Viacheslav Soroka on 12/11/20.
//  Copyright © 2020 NewspaperDirect. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSError (Initialization)

+ (instancetype)errorWithDomain:(NSErrorDomain)domain
                           code:(NSInteger)code
                    description:(nullable NSString *)description;

@end

NS_ASSUME_NONNULL_END
