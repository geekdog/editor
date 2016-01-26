//
//  GKDEditorItemView.h
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GKDEditorItem.h"

@interface GKDEditorItemView : UIView <GKDEditorItemDataSource>

@property (nonatomic, strong) GKDEditorItem *gkd_item;

/**
 *  初始化
 *
 *  @param aFrame 容器的frame
 *
 *  @return 容器实例
 */
- (nonnull instancetype)initWithFrame:(CGRect)aFrame;

@end
