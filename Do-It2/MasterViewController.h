//
//  MasterViewController.h
//  Do-It2
//
//  Created by Julie Klotter on 1/27/14.
//  Copyright (c) 2014 IOSClass. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
