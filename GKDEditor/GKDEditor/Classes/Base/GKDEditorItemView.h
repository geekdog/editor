//
//  GKDEditorItemView.h
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GKDBaseItem.h"
#import "GKDEditorLabel.h"
#import "GKDEditorImageView.h"

@interface GKDEditorItemView : UIView <GKDEditorItemDataSource>

@property (nonatomic, strong, nonnull) GKDBaseItem *gkd_item;

- (nonnull instancetype)initWithFrame:(CGRect)aFrame
                       editorItemType:(GKDEditorItemType)aType;

@end
