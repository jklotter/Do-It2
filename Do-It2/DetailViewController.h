//
//  DetailViewController.h
//  Do-It2
//
//  Created by Julie Klotter on 1/27/14.
//  Copyright (c) 2014 IOSClass. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
