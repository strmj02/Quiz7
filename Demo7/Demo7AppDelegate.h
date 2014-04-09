//
//  Demo7AppDelegate.h
//  Demo7
//
//  Created by Rachel Johnson on 4/9/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Demo7AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
