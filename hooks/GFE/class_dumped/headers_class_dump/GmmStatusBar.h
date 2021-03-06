//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class NSString, NSTimer, UILabel;

@interface GmmStatusBar : UIView
{
    float _statusBarVisibleY;
    float _statusBarVisibleH;
    BOOL _isShown;
    NSTimer *_flashTimer;
    UILabel *_statusLabel;
}

+ (id)alloc;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSTimer *flashTimer; // @synthesize flashTimer=_flashTimer;
@property(copy, nonatomic) NSString *text;
- (void)hide;
- (void)showWithAlert;
- (void)flashBackground;
- (void)startFlashAniamtionWithDelay:(float)arg1;
- (void)cancelFlashAnimation;
- (void)show;
- (void)showBar;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

