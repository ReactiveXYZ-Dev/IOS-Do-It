//
//  AppDelegate.m
//  Do it
//
//  Created by Jackie Chung on 23/04/2015.
//  Copyright (c) 2015 Future Innovation Studio. All rights reserved.
//

#import "AppDelegate.h"
#import "Constants.h"
#import "GlobalNoticeHandler.h"
#import "ViewController.h"
#import "ActivtyInstancesManager.h"
#import "LocalNotificationHandler.h"
@interface AppDelegate (){}

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault];

    UIStoryboard * storyBoard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];;
    ViewController * rootVC = [storyBoard instantiateViewControllerWithIdentifier:@"rootVC"];
    
    self.window.rootViewController = rootVC;
    [self.window makeKeyAndVisible];
    
    //Register local notification
    if ([[UIApplication sharedApplication] respondsToSelector:@selector(currentUserNotificationSettings)]){
        // Check it's iOS 8 and above
        
        UIUserNotificationSettings *grantedSettings = [[UIApplication sharedApplication] currentUserNotificationSettings];
        
        if (grantedSettings.types == UIUserNotificationTypeNone) {
            //Prompt to accept notification grant
            UIUserNotificationType types = UIUserNotificationTypeBadge |
            UIUserNotificationTypeSound | UIUserNotificationTypeAlert;
            UIUserNotificationSettings *mySettings =
            [UIUserNotificationSettings settingsForTypes:types categories:nil];
            [[UIApplication sharedApplication] registerUserNotificationSettings:mySettings];
        }
        
    }
    //TODO : Check if this launch is from a local notification
    
    
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
    
    // ======================================== DEFAULTS ABOVE ==============================================
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    
    // ======================================== DEFAULTS ABOVE ==============================================
    
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    
    // ========================================= DEFAULTS ABOVE ===========================================
    
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    
    // ========================================= DEFAULTS ABOVE ===========================================
    
}

// Received local notification
-(void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification{
    UIApplicationState appState = [application applicationState];
    NSDictionary* userInfo = notification.userInfo;
    //When app is foreground ->
    if (appState == UIApplicationStateActive) {
        //Show in-app notification with HDNotification
        NSString*iconImageName = [userInfo objectForKey:kLOCAL_IN_APP_NOTIF_INFO_IMAGE_NAME_KEY];
        [GlobalNoticeHandler showNotificationBannerWithTitle:notification.alertAction Message:notification.alertBody Duration:0.0 ImageName:iconImageName OnTapCompletion:nil];
    }
    if (appState == UIApplicationStateInactive) {
    
        
    }
    
    
}

@end
