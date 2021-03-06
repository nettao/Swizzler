/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GTCalendarViewDataSource-Protocol.h"
#import "GTDataLoadingProtocol-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class GTCalendarDataSourceCache, GTCalendarDayViewController, GTCalendarInfiniteListViewController, GTCalendarMonthViewController, GTCalendarWeekViewController, NSDate, NSOperationQueue, NSTimer, UIView, UIViewController<GTCalendarViewControllerModule>;

@interface GTCalendarViewController : _ABAddressBookAddRecord <GTCalendarViewDataSource, UIPopoverControllerDelegate, GTDataLoadingProtocol>
{
    NSDate *_lowerDateBoundary;
    NSDate *_upperDateBoundary;
    NSDate *_estimatedLowerDate;
    id <GTCalendarDataSourceDelegate> _dataSourceDelegate;
    id <GTCalendarViewControllerDelegate> _delegate;
    UIViewController<GTCalendarViewControllerModule> *_currentViewController;
    GTCalendarDayViewController *_dayViewController;
    GTCalendarWeekViewController *_weekViewController;
    GTCalendarMonthViewController *_monthViewController;
    GTCalendarInfiniteListViewController *_infiniteListViewController;
    GTCalendarDataSourceCache *_dataSourceCache;
    GTCalendarDataSourceCache *_infiniteListViewDataSoureCache;
    GTCalendarDataSourceCache *_monthDataSourceCache;
    NSDate *_startDate;
    NSDate *_endDate;
    NSOperationQueue *_dataLoadingQueue;
    NSTimer *_currentDayTimer;
    UIView *_customDatePicker;
    UIView *_blockingView;
}

- (void)setBlockingView:(id)fp8;
- (id)blockingView;
- (void)setCustomDatePicker:(id)fp8;
- (void)setCurrentDayTimer:(id)fp8;
- (id)currentDayTimer;
- (void)setDataLoadingQueue:(id)fp8;
- (id)dataLoadingQueue;
- (void)setEndDate:(id)fp8;
- (id)endDate;
- (void)setStartDate:(id)fp8;
- (id)startDate;
- (void)setMonthDataSourceCache:(id)fp8;
- (id)monthDataSourceCache;
- (void)setInfiniteListViewDataSoureCache:(id)fp8;
- (id)infiniteListViewDataSoureCache;
- (void)setDataSourceCache:(id)fp8;
- (id)dataSourceCache;
- (void)setInfiniteListViewController:(id)fp8;
- (id)infiniteListViewController;
- (void)setMonthViewController:(id)fp8;
- (id)monthViewController;
- (void)setWeekViewController:(id)fp8;
- (id)weekViewController;
- (void)setDayViewController:(id)fp8;
- (id)dayViewController;
- (id)currentViewController;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setDataSourceDelegate:(id)fp8;
- (id)dataSourceDelegate;
- (void)setEstimatedLowerDate:(id)fp8;
- (id)estimatedLowerDate;
- (void)setUpperDateBoundary:(id)fp8;
- (id)upperDateBoundary;
- (void)setLowerDateBoundary:(id)fp8;
- (id)lowerDateBoundary;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (int)numOccurrencesOnOrAfterDate:(id)fp8 fromOccurrences:(id)fp12;
- (int)numOccurrencesOnOrBeforeDate:(id)fp8 fromOccurrences:(id)fp12;
- (BOOL)isWithinDateLimit:(id)fp8 reverse:(BOOL)fp12 lowerDateBoundary:(id)fp16 upperDateBoundary:(id)fp20;
- (id)cacheBucketDataWithDate:(id)fp8;
- (BOOL)shouldLoadAggressiveForDate:(id)fp8 reverse:(BOOL)fp12;
- (id)loadUntilFullWithStartDate:(id)fp8 minResults:(int)fp12 reverse:(BOOL)fp16 buckets:(id)fp20 occurrences:(id)fp24 count:(int *)fp28 operation:(id)fp32;
- (void)loadFilteredCacheFromStartDate:(id)fp8 minResults:(int)fp12 shouldLoadBefore:(BOOL)fp16 operation:(id)fp20 cacheDelegate:(id)fp24 prepareForSwapCallback:(id)fp(null);
- (void)loadDataForDay:(id)fp8 operation:(id)fp12 callback:(id)fp(null);
- (void)loadDataForMonth:(id)fp8 operation:(id)fp12 callback:(id)fp(null);
- (void)cancelLoadingFromStartDate:(id)fp8 toEndDate:(id)fp12 sender:(id)fp16 completionBlock:(id)fp(null);
- (void)loadDataForPeriodFromStartDate:(id)fp8 toEndDate:(id)fp12 completionBlock:(id)fp(null);
- (void)startLoadingCalendarOccurrencesFromStartDate:(id)fp8 toEndDate:(id)fp12 sender:(id)fp16 completionBlock:(id)fp(null);
- (void)hideCustomDatePicker;
- (struct CGRect)datePickerFrameInView:(id)fp8;
- (void)userSelectedDate;
- (void)datePickerOk;
- (void)datePickerCancel;
- (id)customDatePicker;
- (struct CGSize)datePickerSize;
- (void)showCustomDatePicker:(id)fp8;
- (void)addNewEvent:(id)fp8;
- (void)selectDate:(id)fp8;
- (void)goToToday;
- (void)goToDateAndTime:(id)fp8;
- (void)handleSignificantTimeChange:(id)fp8;
- (void)broadcastTimeUpdateNotification:(id)fp8;
- (void)reloadDataCache;
- (void)removeFilteredCache:(id)fp8;
- (id)calendarListFilteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (id)allDayFilteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (id)filteredCacheForDay:(id)fp8 delegate:(id)fp12;
- (id)compositeFilteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (id)filteredCacheWithStartDate:(id)fp8 endDate:(id)fp12 delegate:(id)fp16;
- (void)updateEventWithId:(int)fp8 forDataSourceCache:(id)fp12;
- (void)updateEventWithId:(int)fp8;
- (void)enumerateCacheDateRangeUsingBlock:(id)fp(null);
- (void)removeCalendarOccurrencesWithRecordId:(unsigned int)fp8 andNotInArray:(id)fp12 startDate:(id)fp16 endDate:(id)fp20;
- (void)removeAllCalendarOccurrencesWithRecordId:(unsigned int)fp8;
- (void)removeCalendarOccurrences:(id)fp8;
- (void)removeCalendarOccurrence:(id)fp8;
- (void)addOrReplaceCalendarOccurrences:(id)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewWillAppear:(BOOL)fp8;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)calendarViewTitles;
- (void)didSelectModule:(id)fp8 atIndex:(int)fp12;
- (void)changeCalendarView:(int)fp8;
- (void)setCurrentViewController:(id)fp8;
- (void)updateCalendarAppearance;
- (void)timeZoneChanged;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (id)initWithDataSourceDelegate:(id)fp8;
- (void)dealloc;

@end

