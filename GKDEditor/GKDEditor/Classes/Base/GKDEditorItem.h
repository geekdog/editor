//
//  GKDEditorItem.h
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GKDEditorItemDataSource.h"
#import "GKDEditorItemDelegate.h"

@protocol GKDEditorItem <NSObject>

@optional
@property (nonatomic, weak, nullable) id <GKDEditorItemDataSource>gkd_dataSource;
@property (nonatomic, weak, nullable) id <GKDEditorItemDelegate>gkd_delegate;

@end
