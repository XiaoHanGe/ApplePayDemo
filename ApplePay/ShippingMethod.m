//
//  ShippingMethod.m
//  ApplePay
//
//  Created by HanJunqiang on 16/2/23.
//  Copyright © 2016年 HanJunqiang. All rights reserved.
//

#import "ShippingMethod.h"

@implementation ShippingMethod

- (instancetype)initWithPrice:(NSDecimalNumber *)price title:(NSString *)title description:(NSString *)description
{
    if (self = [super init]) {
        _price = price;
        _title = title;
        _methodDescription = description;
    }
    return self;
}

@end
