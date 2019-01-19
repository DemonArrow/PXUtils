//
//  UIFont+PX.m
//  PXUtilsDemo
//
//  Created by Charles on 2019/1/17.
//  Copyright © 2019 Charles.Qi. All rights reserved.
//

#import "UIFont+PX.h"

@implementation UIFont (PX)

+ (void)px_showAllFonts{
    NSArray *familyNames = [UIFont familyNames];
    for( NSString *familyName in familyNames ){
        NSLog(@"Family: %s \n", [familyName UTF8String] );
        NSArray *fontNames = [UIFont fontNamesForFamilyName:familyName];
        for( NSString *fontName in fontNames ){
            NSLog(@"\tFont: %s \n", [fontName UTF8String] );
        }
    }
}

+ (UIFont *)px_microsoftYaHeiFontOfSize:(CGFloat)fontSize{
    return [UIFont fontWithName:@"MicrosoftYaHeiUI" size:fontSize];
}

@end
