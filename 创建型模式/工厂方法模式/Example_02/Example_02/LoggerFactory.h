//
//  LoggerFactory.h
//  Example_02
//
//  Created by Bi Weiming on 15/6/27.
//  Copyright (c) 2015年 Bi Weiming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Logger.h"

@protocol LoggerFactory <NSObject>

- (id<Logger>)createLogger;
- (id<Logger>)createLoggerWithArgs:(NSString *)args;
- (id<Logger>)createLoggerWithObj:(id)obj;

@end

@interface LoggerFactory : NSObject

/**
 有时候，为了进一步简化客户端的使用，还可以对客户端隐藏工厂方法，此时，在工厂类中将直接调用产品类的业务方法，客户端无须调用工厂方法创建产品，直接通过工厂即可使用所创建的对象中的业务方法。
 */
- (void)writeLog;

@end