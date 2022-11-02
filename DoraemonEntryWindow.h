//
//  DoraemonEntryWindow.h
//  DoraemonKit
//
//  Created by yixiang on 2017/12/11.
//  Copyright © 2017年 yixiang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define GET_IMAGE(IMAGE_NAME) [UIImage imageNamed:IMAGE_NAME]

//Doraemon默认位置
#define DoraemonStartingPosition            CGPointMake(0, DoraemonScreenHeight/3.0)
#define DoraemonScreenWidth [UIScreen mainScreen].bounds.size.width
#define DoraemonScreenHeight [UIScreen mainScreen].bounds.size.height



/// 入口滑动浮窗（默认记录上次坐标）
@interface DoraemonEntryWindow : UIWindow

/// 是否自动停靠，默认为YES
@property (nonatomic, assign) BOOL autoDock;

// 定制位置
- (instancetype)initWithStartPoint:(CGPoint)startingPosition;
- (void)show;

- (void)configEntryBtnBlingWithText:(NSString *)text backColor:(UIColor *)backColor;
@end
