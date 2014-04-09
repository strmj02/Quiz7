//
//  Task.h
//  Demo7
//
//  Created by Rachel Johnson on 4/9/14.
//  Copyright (c) 2014 Rachel Johnson. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic) float urgency;
@property (nonatomic, retain) NSString * name;

@end
