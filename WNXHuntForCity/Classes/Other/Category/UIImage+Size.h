//
//  UIImage+Size.h
//  WNXHuntForCity
//
//  Created by MacBook on 15/7/13.
//  Copyright (c) 2015年 维尼的小熊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Size)

//修改image的大小

- (UIImage *)imageByScalingToSize:(CGSize)targetSize;

// 控件截屏
+ (UIImage *)imageWithCaputureView:(UIView *)view;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com