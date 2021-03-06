//
//  UIFont+PX.h
//  PXUtilsDemo
//
//  Created by Charles on 2019/1/17.
//  Copyright © 2019 Charles.Qi. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define PXUtilsMicrosoftFont(fontSize) [UIFont px_microsoftYaHeiFontOfSize:(fontSize)]

@interface UIFont (PX)

/**
 显示所有字体
 */
+ (void)px_showAllFonts;

/**
 微软雅黑字体
 调用此方法必须先导入微软雅黑字体包
 并且该字体的名字确实是MicrosoftYaHeiUI
 否则该方法不能调用,也可以下载demo中的雅黑字体包
 并在info.plist中引入'Fonts provided by application',item字段名为yahei.ttf
 @param fontSize 字号
 */
+ (UIFont *)px_microsoftYaHeiFontOfSize:(CGFloat)fontSize;

@end

NS_ASSUME_NONNULL_END
