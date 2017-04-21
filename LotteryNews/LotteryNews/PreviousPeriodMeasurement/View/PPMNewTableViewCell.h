//
//  PPMNewTableViewCell.h
//  LotteryNews
//
//  Created by 邹壮壮 on 2017/3/28.
//  Copyright © 2017年 邹壮壮. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LottoryCategoryModel.h"
#import "RankListModel.h"
@protocol PPMNewTableViewCellDelegate <NSObject>

- (void)clickLeft:(NSString *)lottoryName;
- (void)clickRight:(NSString *)lottoryName;
@end
@interface PPMNewTableViewCell : UITableViewCell
@property (nonatomic, weak)id<PPMNewTableViewCellDelegate>delegate;
- (void)setContent:(NSArray *)itemsGroup atIndexPath:(NSIndexPath *)indexPath rankArray:(NSArray *)rankList;
- (void)setContent:(LottoryCategoryModel *)itemModel RankListModel:(RankListModel*)rankModel;
@end
