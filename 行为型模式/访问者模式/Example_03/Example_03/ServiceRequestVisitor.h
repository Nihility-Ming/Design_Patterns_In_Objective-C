//
//  ServiceRequestVisitor.h
//  Example_03
//
//  Created by 找塑料 on 16/5/3.
//  Copyright © 2016年 Nihility-Ming. All rights reserved.
//

#import "Visitor.h"

/**
 *  具体的访问者，实现客户提出服务请求的功能
 */
@interface ServiceRequestVisitor : Visitor <Visitor>

@end
