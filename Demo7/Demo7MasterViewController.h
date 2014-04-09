//
//  Demo7MasterViewController.h
//  Demo7
//
//  Created by Rachel Johnson on 4/9/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface Demo7MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
