//
//  WNXRmdCellModel.m
//  WNXHuntForCity
//  github:    https://github.com/ZhongTaoTian/WNXHuntForCity
//  项目讲解博客:http://www.jianshu.com/p/8b0d694d1c69
//  Created by MacBook on 15/7/11.
//  Copyright (c) 2015年 维尼的小熊. All rights reserved.
//

#import "WNXRmdCellModel.h"

@implementation WNXRmdCellModel

+ (instancetype)rmdCellModelWithDict:(NSDictionary *)dict
{
    WNXRmdCellModel *cellModel = [[self alloc] init];
    cellModel.pic = dict[@"pic"];
    cellModel.ch = dict[@"ch"];
    
    return cellModel;
}

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com