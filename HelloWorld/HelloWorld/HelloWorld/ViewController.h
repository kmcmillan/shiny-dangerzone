//
//  ViewController.h
//  HelloWorld
//
//  Created by  on 2/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)pushButton:(id)sender;
- (IBAction)clearButton:(id)sender;

@end
