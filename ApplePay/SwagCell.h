//
//  SwagCell.h
//  ApplePay
//
//  Created by HanJunqiang on 16/2/23.
//  Copyright © 2016年 HanJunqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SwagCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *swagImage;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;

@end
