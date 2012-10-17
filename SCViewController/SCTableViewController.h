//
//  SCTableViewController.h
//  SCViewController
//
//  Created by Sean Cheng on 10/15/12.
//  Copyright (c) 2012 Sean Cheng. All rights reserved.
//

#import "SCViewController.h"

@interface SCTableViewController : SCViewController <UITableViewDataSource,UITableViewDelegate>

@property (strong,nonatomic) UITableView*	tableView;

- (id)initWithStyle:(UITableViewStyle)style;

@end