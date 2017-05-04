//
//  Base.h
//  ZWLY-Parts
//
//  Created by zhangwei on 16/9/12.
//  Copyright © 2016年 JYall. All rights reserved.
//

#ifndef Base_h
#define Base_h

#define kBaseUrl @"http://mobile.ximalaya.com/"
#define kLiveUrl @"http://live.ximalaya.com/"
#define kAdUrl @"http://adse.ximalaya.com/"
#define kAlbumUrl @"http://ar.ximalaya.com/"
#define kHybridUrl @"http://hybrid.ximalaya.com/"

// 如果是调试模式(DEBUG 是调试模式下, 自带的宏)
#ifdef DEBUG
#define ZWLog(...) NSLog(__VA_ARGS__);
#else
#define ZWLog(...)
#endif

// 打印调用函数的宏
#define ZWLogFunc ZWLog(@"%s",__func__);

// 随机颜色
#define Color(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define ZWColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define ZWAlphaColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define ZWRandomColor ZWColor(arc4random_uniform(255.0), arc4random_uniform(255.0), arc4random_uniform(255.0))
#define kCommonColor ZWColor(223, 223, 223)

// 屏幕尺寸相关
#define kScreenBounds [[UIScreen mainScreen] bounds]
#define kScreenWidth [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight [[UIScreen mainScreen] bounds].size.height

// 弱引用
#define kWeakSelf __weak typeof(self) weakSelf = self;

#endif /* Base_h */
