//
//  Constants.h
//  Do it
//
//  Created by Jackie Chung on 9/07/2015.
//  Copyright (c) 2015 Future Innovation Studio. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Font names */
static NSString* const kSF_FONT_REGULAR = @"SF-UI-Display-Regular.otf";
static NSString* const kSF_FONT_MEDIUM = @"SF-UI-Display-Medium.otf";
static NSString* const kSF_FONT_LIGHT = @"SF-UI-Display-Light.otf";

/* Notification names */
static NSString* const kNOTIF_ACTIVATE_FOCUS_MODE = @"notif_activate_focus_mode";
static NSString* const kNOTIF_DEACTIVATE_FOCUS_MODE = @"notif_deactivate_focus_mode";

static NSString* const kNOTIF_UPDATE_ACTIVITY_TABLE_VIEW = @"notif_updateTableViewData";
static NSString* const kNOTIF_PRESENT_RETRY_TIME_SELECTION_ACTION_SHEET = @"notif_presentRetryTimePickerActionSheet";

static NSString* const kNOTIF_ONGOING_ACTIVITY_COMPLETE_PRESSED = @"notif_complete_btn_pressed";

static NSString* const kNOTIF_EC_INTRO_VIEW_CANCELLING = @"notif_intro_view_cancelling";
static NSString* const kNOTIF_EC_INTRO_VIEW_PROCEEDING = @"notif_intro_view_proc";
static NSString* const kNOTIF_EC_TASK_VIEW_PROCEEDING = @"notif_task_view_proc";
static NSString* const kNOTIF_EC_TIME_PICKER_PROCEEDING = @"notif_time_picker_proc";
static NSString* const kNOTIF_EC_FINAL_FINISH = @"notif_final_finish";

/* LocalNotification to LNNotification User Info Keys */
static NSString* const kLOCAL_IN_APP_NOTIF_INFO_TRIGGERING_ACTION_KEY = @"local_notif_triggering_action_key";
static NSString* const kLOCAL_IN_APP_NOTIF_INFO_ALERT_REGISTERED_IDENTIFIER_KEY = @"local_notif_registered_identifier_key";
static NSString* const kLOCAL_IN_APP_NOTIF_INFO_ALERT_REGISTERED_NAME_KEY = @"local_notif_registered_name_key";
static NSString* const kLOCAL_IN_APP_NOTIF_INFO_IMAGE_NAME_KEY = @"local_notif_image_name_key";
