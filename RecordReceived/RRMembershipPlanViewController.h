//
//  RRMembershipPlanViewController.h
//  RecordReceived
//
//  Created by Mac on 01/09/14.
//  Copyright (c) 2014 sbrtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RRGlobalUIViewController.h"
#import "ZZFlipsideViewController.h"
#import "PayPalMobile.h"


@interface RRMembershipPlanViewController : COGlobalUIViewController
@property(nonatomic, strong, readwrite) UIPopoverController *flipsidePopoverController;
@property(nonatomic, strong, readwrite) NSString *environment;
@property(nonatomic, assign, readwrite) BOOL acceptCreditCards;
@property(nonatomic, strong, readwrite) NSString *resultText;

@property(nonatomic, strong, readwrite) IBOutlet UIButton *payNowButton;
@property(nonatomic, strong, readwrite) IBOutlet UIButton *payFutureButton;
@property(nonatomic, strong, readwrite) IBOutlet UIView *successView;

@property(nonatomic, strong, readwrite) PayPalConfiguration *payPalConfig;
@end
