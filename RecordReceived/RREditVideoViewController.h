//
//  RREditVideoViewController.h
//  RecordReceived
//
//  Created by Mac on 15/09/14.
//  Copyright (c) 2014 sbrtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RRGlobalUIViewController.h"

@interface RREditVideoViewController : COGlobalUIViewController

- (IBAction)dismissButtonDidTouch:(id)sender;

@property (unsafe_unretained, nonatomic) IBOutlet UIButton *dismissButton;
@property (nonatomic,retain) NSString *VideoObjectId;
@end
