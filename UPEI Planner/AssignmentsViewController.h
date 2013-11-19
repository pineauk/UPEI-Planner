//
//  AssignmentsViewController.h
//  UPEI Planner
//
//  Created by Evan Jackson on 2013-11-18.
//  Copyright (c) 2013 Kyle Pineau & Evan Jackson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Assignment.h"
#import "AppDelegate.h"
#import "AddAssignmentController.h"
#import "StudentClass.h"
//#import "SingleCourseViewController.h"

@interface AssignmentsViewController : UITableViewController <UITableViewDataSource, UITabBarDelegate>

@property (strong, nonatomic) NSMutableArray *assignments;
@property StudentClass *course;

@end