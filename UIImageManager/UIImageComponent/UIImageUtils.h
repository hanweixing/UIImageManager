//
//  UIImageUtils.h
//  UIImageManager
//
//  Created by 韩卫星 on 16/9/13.
//  Copyright © 2016年 hanweixing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 *  图片处理类
 */
@interface UIImageUtils : NSObject

/**
 *  比例缩放图片
 *
 *  @param image  原图
 *  @param aspect 比例
 *
 *  @return 处理后的图
 */
+ (UIImage *)imageManagerScale:(UIImage *)image aspectValue:(CGFloat)aspect;

/**
 *  固定尺寸处理图片
 *
 *  @param image 原图
 *  @param size  固定尺寸
 *
 *  @return 处理后的图
 */
+ (UIImage *)imageManagerScale:(UIImage *)image customSize:(CGSize)size;

/**
 *  比例适配图片到固定的尺寸中
 *
 *  @param image 原图
 *  @param size  固定尺寸
 *
 *  @return 存放后的图
 */
+ (UIImage *)imageManagerAspectFit:(UIImage *)image size:(CGSize)size;

/**
 *  将图片进行反转
 *
 *  @param image 原始图片
 *  @param orientation 指定翻转方向
 *
 *  @return 处理后的图片
 */
+ (UIImage *)imageReverse:(UIImage *)image orientation:(UIImageOrientation)orientation;

/**
 *  纠正图片的方向
 *
 *  @param aImage 原始图片
 *
 *  @return 处理后的图片
 */
+ (UIImage *)fixOrientation:(UIImage *)aImage;

@end
