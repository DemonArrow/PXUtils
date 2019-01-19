//
//  PXUtilsConstInline.h
//  PXUtilsDemo
//
//  Created by Charles on 2019/1/18.
//  Copyright © 2019 Charles.Qi. All rights reserved.
//

#ifndef PXUtilsConstInline_h
#define PXUtilsConstInline_h

/**
 是否是iPhone X以上的机型
 */
#define PXUtilsIsX ([[UIApplication sharedApplication] statusBarFrame].size.height>20)

/**
 状态栏高度
 */
static inline CGFloat PXUtilsStatusBarHeight(){
    return (PXUtilsIsX ? 44.f : 20.f);
}

/**
 导航栏高度，包含状态栏
 */
static inline CGFloat PXUtilsNavBarHeight(){
    return (PXUtilsIsX ? 88.f : 64.f);
}

/**
 Tab栏高度，包含iPhone X控制条
 */
static inline CGFloat PXUtilsTabBarHeight(){
    return (PXUtilsIsX ? 83.f : 49.f);
}

/**
 iPhone X控制条高度
 */
static inline CGFloat PXUtilsIndicatorBarHeight(){
    return (PXUtilsIsX ? 34.f : 0.f);
}

/**
 键盘高度
 */
static inline CGFloat PXUtilsKeyBoardHeight(){
    return (PXUtilsIsX ? 291.f : 216.0f);
}

/**
 以iPhone6为参照的宽
 */
static inline CGFloat PXUtilsWidthByIP6(CGFloat width){
    return roundf(width * PXScreenWidth / 375.0);
}

/**
 以iPhone6为参照的高
 */
static inline CGFloat PXUtilsHeightByIP6(CGFloat height){
    return roundf(height * PXScreenHeight / 667.0);
}

/**
 以iPhone6P为参照的宽
 */
static inline CGFloat PXUtilsWidthByIP6P(CGFloat width){
    return roundf(width * PXScreenWidth / 414.0);
}

/**
 以iPhone6P为参照的高
 */
static inline CGFloat PXUtilsHeightByIP6P(CGFloat height){
    return roundf(height * PXScreenHeight / 736.0);
}

/**
 获取图片

 @param imageName 图片名字
 */
static inline UIImage * PXUtilsImageNamed(NSString *imageName){
    return [UIImage imageNamed:imageName];
}

#import "UIColor+PX.h"

/**
 16进制字符串生成颜色

 @param hexString 16进制字符串
 */
static inline UIColor *PXUtilsColorHex(NSString *hexString){
    return [UIColor px_colorWithHexString:hexString];
}

/**
 16进制字符串生成颜色，加透明度

 @param hexString 16进制字符串
 @param alpha 透明度
 */
static inline UIColor *PXUtilsColorHexAlpha(NSString *hexString, CGFloat alpha){
    return [UIColor px_colorWithHexString:hexString alpha:alpha];
}

/**
 生成随机色
 */
static inline UIColor *PXUtilsRandomColor(){
    return [UIColor px_randomColor];
}

/**
 普通字体

 @param fontSize 字体大小
 */
static inline UIFont *PXUtilsFont(CGFloat fontSize){
    return [UIFont systemFontOfSize:fontSize];
}

/**
 粗体字

 @param fontSize 字体大小
 */
static inline UIFont *PXUtilsBoldFont(CGFloat fontSize){
    return [UIFont boldSystemFontOfSize:fontSize];
}


/**
 int转string
 */
static inline NSString *PXUtilsIntToString(NSInteger intValue){
    return [NSString stringWithFormat:@"%@",@(intValue)];
}

static inline CGFloat PXIOSVersion(){
    return ([[[UIDevice currentDevice] systemVersion] floatValue]);
}

#endif /* PXUtilsConstInline_h */