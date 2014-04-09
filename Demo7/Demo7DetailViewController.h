//
//  Demo7DetailViewController.h
//  Demo7
//
//  Created by Rachel Johnson on 4/9/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface Demo7DetailViewController : UIViewController<UITextFieldDelegate>

@property (strong, nonatomic) Task *detailItem;
@property (weak, nonatomic) IBOutlet UITextField *nameLabel;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UISlider *urgencySlider;
@property (nonatomic, copy) void (^dismissBlock)(void);

- (IBAction)saveChanges:(id)sender;


@end
