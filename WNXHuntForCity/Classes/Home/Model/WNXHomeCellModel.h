//
//  WNXHomeCellModel.h
//  WNXHuntForCity
//
//  Created by MacBook on 15/7/20.
//  Copyright (c) 2015年 维尼的小熊. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WNXHomeCellModel : NSObject

/** cellTitle */
@property (nonatomic, copy) NSString *section_title;
/** 图片地址 */
@property (nonatomic, copy) NSString *imageURL;
/** 浏览次数 */
@property (nonatomic, copy) NSString *fav_count;
/** 底部名称 */
@property (nonatomic, copy) NSString *poi_name;

+ (instancetype)cellModelWithDict:(NSDictionary *)dict;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com