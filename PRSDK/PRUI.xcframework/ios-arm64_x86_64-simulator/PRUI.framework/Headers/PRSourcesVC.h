//
//  PRSourcesVC.h
//  PressReader
//
//  Created by Oleg Stepanenko on 14.11.12.
//

#import <UIKit/UIKit.h>
#import "PRBaseStoreCollectionVC.h"
#import "PRTooltipDelegate.h"

@class PRCountableValue;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM (NSUInteger, PRSourcesListType) {
    PRSourcesListType_Default,
    PRSourcesListType_SourcesWithSupplement
};

@protocol PRSourcesVCOrderDelegate <NSObject>

- (BOOL)shouldOrderParentTitleOnlyForCID:(NSString *)CID;

@end

/// This class represents high level business layer of SourcesVC.
/// It provides logic for proper setup of data provider.
/// All content rendering logic contains in parent class PRBaseStoreCollectionVC.
@interface PRSourcesVC : PRBaseStoreCollectionVC

+ (NSArray *)controllersWithSourceList:(PRSourceList *)sourceList andPath:(NSArray *)path;

- (void)setupAllSources;
- (void)setupAllSourcesWithFilter:(nullable NSString *)filterText;
- (void)setupFavorites;
- (void)setupSourceWithSupplementsForTitleItem:(PRTitleItem *)titleItem;
- (void)setupSourcesInCountry:(PRCountableValue *)country;
- (void)setupSourcesInRegion:(PRCountableValue *)region inCountry:(PRCountableValue *)country;
- (void)setupSourcesForSubscriptions:(NSArray *)subscriptions;
- (void)setupSourcesForCIDs:(NSArray *)cids;
- (void)savePublicationPath;

@property (nonatomic, readonly) NSArray<NSDictionary *> *publicationPath;
@property (nullable, nonatomic, strong) NSString *listName;
@property (nullable, nonatomic) id<PRSourcesVCOrderDelegate> orderDelegate;

@property (nonatomic, readonly) NSArray<PRSourceListFilter *> *sourceListFilters;

@end

@interface PRSourcesVC (/*Protected*/)<PRTooltipVCProtocol>
@property (nonatomic, strong) PRTooltipDelegate *tooltipDelegate;
@end

NS_ASSUME_NONNULL_END
