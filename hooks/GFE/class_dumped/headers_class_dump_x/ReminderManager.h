/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "CalendarEventViewControllerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSTimer, Reminder, UIAlertView;

@interface ReminderManager : _ABAddressBookAddRecord <UIApplicationDelegate, CalendarEventViewControllerDelegate>
{
    NSTimer *_reminderTimer;
    struct ACalendar *calendarDb;
    NSMutableArray *remindersArray;
    BOOL firstTime;
    struct CDateTimeBits startTime;
    Reminder *_currentReminder;
    NSDate *_currentEndDate;
    UIAlertView *_reminderAlertView;
    BOOL _gracefulShutdown;
    BOOL _wasLocked;
    BOOL _allRemindersSaved;
}

- (void)setReminderTimer:(id)fp8;
- (id)reminderTimer;
- (id).cxx_construct;
- (void)dismissEventViewController:(id)fp8 animated:(BOOL)fp12;
- (void)wipeData;
- (void)showReminderIfLockedPolicyChangedTo:(BOOL)fp8;
- (void)onPolicyChanged:(id)fp8;
- (void)prepareToForeground;
- (void)prepareToBackground;
- (void)dealloc;
- (void)gracefulShutdown;
- (void)dismissAnyAlert;
- (void)doLock;
- (void)doGmmIsLocked;
- (void)setFiredEventOfId:(unsigned long)fp8 andInstance:(long)fp12;
- (void)checkNextReminder:(id)fp8;
- (unsigned long)currentReminderGoodID;
- (void)openAppointmentDetails:(id)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)didPresentAlertView:(id)fp8;
- (void)onAlertButtonShowEvent;
- (void)onAlertButtonClose;
- (void)playAudibleIndicatorIfRelevant;
- (void)showAlert:(id)fp8 forAppointment:(id)fp12;
- (void)checkReminders;
- (void)showNextReminder;
- (void)updateReminders:(id)fp8;
- (void)resumeCheckingReminders;
- (void)doComplianceCheckSucceeded;
- (void)dismissRemindersIfAnyFromMainThread;
- (void)doGmmIsNotLocked;
- (void)checkElapsedReminders;
- (void)doReminderTimerFired:(id)fp8;
- (void)doCalendarReminderDelete:(unsigned long)fp8;
- (void)doCalendarReminderUpdate:(unsigned long)fp8;
- (void)saveRemindersToFileIfInBackground;
- (void)updateReminder:(unsigned long)fp8 forTime:(struct CDateTimeBits)fp12;
- (void)removeReminder:(unsigned long)fp8;
- (void)addReminder:(struct CDateTimeBits)fp8 withGoodId:(unsigned long)fp12 andInstance:(long)fp16;
- (void)saveRemindersToFile;
- (BOOL)loadRemindersFromDb;
- (BOOL)loadRemindersFromFile;
- (BOOL)loadReminders;
- (void)setAllRemindersSaved:(BOOL)fp8;
- (BOOL)areAllRemindersSaved;
- (id)init;

@end
