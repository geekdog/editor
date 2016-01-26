//
//  GKDEditorItem.h
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GKDEditorItemDataSource.h"
#import "GKDEditorItemDelegate.h"

@interface GKDEditorItem : UIView

@property (nonatomic, weak, nullable) id <GKDEditorItemDataSource>dataSource;
@property (nonatomic, weak, nullable) id <GKDEditorItemDelegate>delegate;

@end

