//
//  CustomerDAO.h
//  Example_02
//
//  Created by btw on 15/3/24.
//  Copyright (c) 2015年 Weiming Bi. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DBUtil;
@protocol DBUtil;

@interface CustomerDAO : NSObject

@property (strong, nonatomic, readwrite) DBUtil<DBUtil> *util;

- (void)addCustomer;

@end
