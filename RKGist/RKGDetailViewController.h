//
//  RKGDetailViewController.h
//  RKGist
//
//  Created by Play on 8/22/13.
//  Copyright (c) 2013 Braindump Relief. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RKGDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
