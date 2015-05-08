//
//  main.m
//  RecordReceived
//
//  Created by Mac on 19/08/14.
//  Copyright (c) 2014 sbrtech. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "RRAppDelegate.h"

int main(int argc, char * argv[])
{
    @try {
        @autoreleasepool {
            return UIApplicationMain(argc, argv, nil, NSStringFromClass([RRAppDelegate class]));
        }
    }
    @catch (NSException *exception) {
        NSLog( @"There is some error === %@",[NSString stringWithFormat:@"%@",exception]);
    }
}
