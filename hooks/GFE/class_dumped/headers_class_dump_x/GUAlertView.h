/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSArray, NSString;

@interface GUAlertView : _ABAddressBookAddRecord
{
    NSString *_cancelButtonTitle;
    NSArray *_otherButtonTitles;
    BOOL _rearrangeLayoutInLandscapeOrientation;
    BOOL _shouldRepresentAfterDismissal;
    BOOL _allowPresentingOnLockScreen;
    BOOL _shouldDismissWithLockedScreen;
    BOOL _wasAutomaticallyDismissed;
    BOOL _shouldDismissWhenBackgrounded;
    double _autoDismissDelay;
}

+ (id)alertViewForDuplicateFileDuringRename:(id)fp8 delegate:(id)fp12;
+ (id)alertViewForDuplicateFileDuringSave:(id)fp8 delegate:(id)fp12;
- (BOOL)shouldDismissWhenBackgrounded;
- (void)setWasAutomaticallyDismissed:(BOOL)fp8;
- (BOOL)wasAutomaticallyDismissed;
- (BOOL)shouldDismissWithLockedScreen;
- (void)setAllowPresentingOnLockScreen:(BOOL)fp8;
- (BOOL)allowPresentingOnLockScreen;
- (void)setShouldRepresentAfterDismissal:(BOOL)fp8;
- (BOOL)shouldRepresentAfterDismissal;
- (void)setRearrangeLayoutInLandscapeOrientation:(BOOL)fp8;
- (BOOL)rearrangeLayoutInLandscapeOrientation;
- (void)setAutoDismissDelay:(double)fp8;
- (double)autoDismissDelay;
- (void)setOtherButtonTitles:(id)fp8;
- (id)otherButtonTitles;
- (void)setCancelButtonTitle:(id)fp8;
- (id)cancelButtonTitle;
- (void)dealloc;
- (id)copy;
- (void)dismissNotification:(id)fp8;
- (void)dismissForBackgrounding:(id)fp8;
- (void)dismissWithClickedButtonIndex:(int)fp8 animated:(BOOL)fp12;
- (void)setShouldDismissWhenBackgrounded:(BOOL)fp8;
- (void)setShouldDismissWithLockedScreen:(BOOL)fp8;
- (BOOL)shouldBeDisplayed;
- (void)show;
- (void)layoutSubviews;
- (void)rearrangeButtonsAndShowMessage;
- (struct CGRect)resizedBoundsForLabel:(id)fp8 byText:(id)fp12;
- (id)initWithTitle:(id)fp8 message:(id)fp12 delegate:(id)fp16 cancelButtonTitle:(id)fp20 otherButtonTitleArray:(id)fp24;
- (id)initWithTitle:(id)fp8 message:(id)fp12 delegate:(id)fp16 cancelButtonTitle:(id)fp20 otherButtonTitles:(id)fp24;

@end

