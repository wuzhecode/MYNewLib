//
//  UIBarButtonItem+Extension.h
//  MJ
//
//  Created by apple on 14-7-3.
//  Copyright (c) 2014年 MJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)
+ (UIBarButtonItem *)itemWithImageName:(NSString *)imageName highImageName:(NSString *)highImageName target:(id)target action:(SEL)action;

+ (UIBarButtonItem *)itemWithTitleName:(NSString *)titleName target:(id)target action:(SEL)action;
@end
