//
//  ShippingMethod.h
//  ApplePay
//
//  Created by HanJunqiang on 16/2/23.
//  Copyright © 2016年 HanJunqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShippingMethod : NSObject

@property (nonatomic, copy) NSDecimalNumber *price;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *methodDescription;

- (instancetype)initWithPrice:(NSDecimalNumber *)price title:(NSString *)title description:(NSString *)description;

@end
