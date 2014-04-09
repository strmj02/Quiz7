//
//  Demo7DetailViewController.m
//  Demo7
//
//  Created by Rachel Johnson on 4/9/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import "Demo7DetailViewController.h"
#import "Demo7MasterViewController.h"

@interface Demo7DetailViewController ()
- (void)configureView;
@end

@implementation Demo7DetailViewController

#pragma mark - Managing the detail item
@synthesize nameLabel;
@synthesize datePicker;
@synthesize urgencySlider;

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.nameLabel.text = [[self.detailItem valueForKey:@"name"] description];
        self.urgencySlider.value = [[self.detailItem valueForKey:@"urgency"] floatValue];
        self.datePicker.date = [self.detailItem valueForKey:@"dueDate"];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
    self.nameLabel.delegate = self;
}

- (void)viewDidUnload
{
    [self setNameLabel:nil];
    [self setDatePicker:nil];
    [self setUrgencySlider:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

- (IBAction)urgencyField:(id)sender {
}

-(BOOL)textFieldShouldReturn:(UITextField *)textField{
    [textField resignFirstResponder];
    return YES;
}

- (IBAction)datePicker:(id)sender {
}
- (IBAction)saveChanges:(id)sender {
    [self.detailItem setName:[self.nameLabel text]];
    [self.detailItem setUrgency:[self.urgencySlider value]];
    [self.detailItem setDueDate:[self.datePicker date]];
    
    self.nameLabel.text = [[self.detailItem valueForKey:@"name"] description];
    
    [self.navigationController popViewControllerAnimated:YES];

}
    

@end
