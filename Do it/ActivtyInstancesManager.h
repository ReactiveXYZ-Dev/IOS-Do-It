//
//  ActivtyInstancesManager.h
//  Do it
//
//  Created by YINGGUANG CHEN on 15/5/19.
//  Copyright (c) 2015年 Future Innovation Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OngoingActivityInstance.h"
#import "PastAcheievementActivityInstance.h"
#import "FailedActivityInstance.h"
#import "TodoListItemInstance.h"
#import "LeftOverItemInstance.h"
#import "DailyItemInstance.h"

@interface ActivtyInstancesManager : NSObject

+(id)sharedManager;
-(instancetype)init;

-(BOOL)saveToFile;
-(void)convertToAchievementWithOngoingInstance:(OngoingActivityInstance*)instance;
-(void)convertToFailedActivityWithOngoingInstance:(OngoingActivityInstance*)instance Giveup:(BOOL)giveup;
-(void)convertToOngoingInstanceWithFailedInstance:(FailedActivityInstance*)instance AndTime:(long)secs;

-(NSDictionary*)constructTimeComponentsWithTimeInSecs:(long)secs;

-(void)addOngoingActivity:(OngoingActivityInstance*)activity;
-(void)deletePastAchievementInstanceIdenticalTo:(PastAcheievementActivityInstance*)instance;
-(void)deleteFailedActivityInstanceIdenticalTo:(FailedActivityInstance*)isntance;
-(void)deletePastAchievementInstanceAtIndex:(NSInteger)idx;
-(void)deleteFailedActivityInstanceAtIndex:(NSInteger)idx;

-(void)addTodoListItem:(TodoListItemInstance*)item;
-(void)dealWithLeftOvers;
-(void)convertToDailyTaskWithCurrentTaskItem:(TodoListItemInstance*)todo AndReminder:(NSDateComponents*)components;
-(void)completeTodoListItem:(TodoListItemInstance*)item;
-(void)completeLeftOverItem:(LeftOverItemInstance*)leftover;
-(void)setReminder:(NSDateComponents*)dateComponents ForDailyItem:(DailyItemInstance*)dailyItem;
-(void)addToCalendarWithDailyItem:(DailyItemInstance*)dailyItem;
-(void)removeFromCalendarWithDailyItem:(DailyItemInstance*)dailyItem;

-(NSArray*)getOngoingActivityInArray;
-(OngoingActivityInstance*)getOngoingInstance;
-(NSArray*)getPastAchievementsArray;
-(NSArray*)getFailedActivityArray;

-(NSArray*)getTodoListArray;
-(NSArray*)getLeftOverListArray;
-(NSArray*)getDailytListArray;

@end
