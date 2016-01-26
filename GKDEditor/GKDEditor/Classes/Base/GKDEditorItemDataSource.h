//
//  GKDEditorItemDataSource.h
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>

/**
 *  元素类型
 */
typedef NS_ENUM(NSUInteger, GKDEditorItemType) {
    GKDEditorItemType_View,
    GKDEditorItemType_Text,
    GKDEditorItemType_Image,
    GKDEditorItemType_ImageSlide,
    GKDEditorItemType_Shape,
    GKDEditorItemType_Button,
    GKDEditorItemType_ButtonLink,
    GKDEditorItemType_Field,
    GKDEditorItemType_RedPacket,
    GKDEditorItemType_Fingerprint
};

/**
 *  编辑元素的数据
 */
@protocol GKDEditorItemDataSource <NSObject>

@required

@optional
/**
 *  元素类型
 */
@property (nonatomic, assign) GKDEditorItemType gkd_type;

/**
 *  元素frame，相对于父容器
 */
@property (nonatomic, assign) CGRect gkd_frame;

/**
 *  元素的size
 */
@property (nonatomic, assign) CGSize gkd_size;


@end
