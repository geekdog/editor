//
//  ViewController.m
//  GKDEditor
//
//  Created by 尹鹏飞 on 16/1/26.
//  Copyright © 2016年 geekdog. All rights reserved.
//

#import "ViewController.h"
#import "GKDEditorItemView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    GKDEditorItemView *itemView = [[GKDEditorItemView alloc] initWithFrame:CGRectMake(0, 0, 100, 100) editorItemType:GKDEditorItemType_Text];
    [self.view addSubview:itemView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
