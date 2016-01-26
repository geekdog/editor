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

- (nonnull instancetype)initWithFrame:(CGRect)aFrame {
    self = [super initWithFrame:aFrame];
    if (self) {
        _gkd_item = [[GKDEditorItem alloc] init];
        _gkd_item.dataSource = self;
        
        [self addSubview:_gkd_item];
    }
    return self;
}

- (CGRect)gkd_frame {
    return self.bounds;
}

- (void)setGkd_type:(GKDEditorItemType)gkd_type {
    switch (gkd_type) {
        case GKDEditorItemType_View:
        {
            
        }
            break;
        case GKDEditorItemType_Text:
        {
        }
            break;
        case GKDEditorItemType_Image:
        {
        }
            break;
        default:
            break;
    }
}

@end
