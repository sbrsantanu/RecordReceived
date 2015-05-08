//
//  RRAppDelegate.h
//  RecordReceived
//
//  Created by Mac on 19/08/14.
//  Copyright (c) 2014 sbrtech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import "Reachability.h"


@interface RRAppDelegate : UIResponder <UIApplicationDelegate,UINavigationControllerDelegate>
{
    BOOL isNetworkConnected;
    BOOL IsConnetedToInternet;
    BOOL isviewopen;
    BOOL isReachable;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,retain) UINavigationController *NavigationController;

@property (assign)BOOL isNetworkConnected;
@property (nonatomic) Reachability *hostReachable;
@property (nonatomic) Reachability *internetReachable;
@property (nonatomic) Reachability *wifiReachability;

/*
 Core data model required parameters
 */

@property (nonatomic,retain,readonly) NSManagedObjectModel *ObjectModel;
@property (nonatomic,retain,readonly) NSManagedObjectContext *ObjectContext;
@property (nonatomic,retain,readonly) NSPersistentStoreCoordinator *StoreCoordinator;
// A class to display the attributes of the vehicle

@property (strong, nonatomic) FBSession *session;
-(void)clearsession;

@end
