//
//  UIFont+Extension.m
//  JinSeJiaYuanWang
//
//  Created by zhangwei on 16/7/22.
//  Copyright © 2016年 JYall Network Technology Co.,Ltd. All rights reserved.
//

#import "UIFont+Extension.h"
#import "Base.h"

@implementation UIFont (Extension)

+ (UIFont *)fontWithDevice:(CGFloat)fontSize {
    if (kScreenWidth > 375) {
        fontSize = fontSize+1.0;
    }else if (kScreenWidth == 375){
        fontSize = fontSize;
    }else if (kScreenWidth == 320){
        fontSize = fontSize - 1;
    }
    
    UIFont *font = [UIFont systemFontOfSize:fontSize];
    return font;
}


+ (UIFont *)boldfontWithDevice:(CGFloat)fontSize {
    if (kScreenWidth > 375) {
        fontSize = fontSize+1.5;
    }else if (kScreenWidth == 375){
        fontSize = fontSize;
    }else if (kScreenWidth == 320){
        fontSize = fontSize - 1;
    }
    UIFont *font = [UIFont boldSystemFontOfSize:fontSize];
    return font;
}
@end
