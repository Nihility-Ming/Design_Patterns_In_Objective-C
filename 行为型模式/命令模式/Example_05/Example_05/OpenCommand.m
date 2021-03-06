//
//  OpenCommand.m
//  Example_05
//
//  Created by 找塑料 on 16/4/20.
//  Copyright © 2016年 Nihility-Ming. All rights reserved.
//

#import "OpenCommand.h"

@implementation OpenCommand

- (instancetype)initWithDoors:(NSString *)doors
{
    if (self = [super init]) {
        _doors = doors;
    }
    return self;
}

- (NSString *)execute
{
    return [NSString stringWithFormat:@"Opened %@", self.doors];
}


@end
