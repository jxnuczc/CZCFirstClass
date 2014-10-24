//
//  DetailViewController.h
//  CZCFirstClass
//
//  Created by lvmaque_czc on 14-10-24.
//  Copyright (c) 2014年 lvmaque_czc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

