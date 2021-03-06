//
//  BEBookmarkDataSource.h
//  BEBookmarksWebViewController
//
//  Created by Bit Cats on 26/03/14.
//  Copyright (c) 2014 bitcats.in. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BEBookmarkHtmlTagInfo.h"

typedef void (^ConfigureBookmarkCellBlock)(UICollectionViewCell *cell, NSIndexPath *indexPath, BEBookmarkHtmlTagInfo *bookmarkData);

@interface BEBookmarkDataSource : NSObject<UICollectionViewDataSource>

@property (nonatomic, strong) ConfigureBookmarkCellBlock configureBookmarkCellBlock;

@property (strong, nonatomic) NSArray *bookmarksInfoData;

@property (nonatomic, assign) Class bookmarksCollectionClass;
@property (nonatomic, strong) NSString *bookmarksCollectionClassId;

- (id)initWithDataArray:(NSArray *)dataArray;

- (BEBookmarkHtmlTagInfo *)bookmarkAtIndexPath:(NSIndexPath *)indexPath;

@end




