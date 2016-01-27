//
//  GKDEditorItemView.m
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import "GKDEditorItemView.h"

@implementation GKDEditorItemView
@synthesize gkd_item = _gkd_item;

- (void)dealloc {
    _gkd_item = nil;
}

- (nonnull instancetype)initWithFrame:(CGRect)aFrame
                       editorItemType:(GKDEditorItemType)aType {
    self = [super initWithFrame:aFrame];
    if (self) {
        self.gkd_type = aType;
        
        [self addSubview:_gkd_item];
        _gkd_item.gkd_dataSource = self;
    }
    return self;
}

- (void)setGkd_frame:(CGRect)gkd_frame {
    if ([self.gkd_item isKindOfClass:[UIView class]]) {
        ((UIView *)self.gkd_item).frame = gkd_frame;
    }
}

//- (CGRect)gkd_frame {
//    if ([self.gkd_item isKindOfClass:[UIView class]]) {
//        
//    }
//    return self.bounds;
//}

- (void)setGkd_type:(GKDEditorItemType)gkd_type {
    switch (gkd_type) {
        case GKDEditorItemType_View:
        {
            
        }
            break;
        case GKDEditorItemType_Text:
        {
            _gkd_item = [[GKDEditorLabel alloc] init];
        }
            break;
        case GKDEditorItemType_Image:
        {
            _gkd_item = [[GKDEditorImageView alloc] init];
        }
            break;
        default:
            break;
    }
}

@end
