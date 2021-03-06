/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class LMWindow, NSMutableArray, NSString, UIColor, UILabel, UITableView, UIToolbar, UIView, UIViewController;

@interface LMAlertView : _CATransform3DMakeScale <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _keepTopAlignment;
    BOOL _visible;
    BOOL _buttonsShouldStack;
    BOOL _autoRotate;
    UIColor *_tintColor;
    UIView *_contentView;
    id <UIAlertViewDelegate> _delegate;
    int _cancelButtonIndex;
    int _firstOtherButtonIndex;
    NSString *_message;
    int _numberOfButtons;
    NSString *_title;
    UIView *_alertContainerView;
    UIView *_backgroundView;
    UIView *_representationView;
    UIView *_alertBackgroundView;
    UIToolbar *_toolbar;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UITableView *_buttonTableView;
    UITableView *_otherTableView;
    LMWindow *_window;
    UIViewController *_controller;
    NSString *_cancelButtonTitle;
    NSMutableArray *_otherButtonsTitles;
}

+ (id)getStandardTitleStringAttributes;
+ (id)getStandardMessageStringAttributes;
+ (id)replaceChar:(BOOL)fp8 withImage:(id)fp12 inString:(id)fp16 usingAttribues:(id)fp20;
- (void)setOtherButtonsTitles:(id)fp8;
- (id)otherButtonsTitles;
- (void)setCancelButtonTitle:(id)fp8;
- (id)cancelButtonTitle;
- (void)setController:(id)fp8;
- (id)controller;
- (void)setWindow:(id)fp8;
- (id)window;
- (void)setOtherTableView:(id)fp8;
- (id)otherTableView;
- (void)setButtonTableView:(id)fp8;
- (id)buttonTableView;
- (void)setMessageLabel:(id)fp8;
- (id)messageLabel;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (id)toolbar;
- (id)alertBackgroundView;
- (id)representationView;
- (id)backgroundView;
- (id)alertContainerView;
- (void)setAutoRotate:(BOOL)fp8;
- (BOOL)autoRotate;
- (BOOL)buttonsShouldStack;
- (BOOL)isVisible;
- (id)title;
- (int)numberOfButtons;
- (id)message;
- (int)firstOtherButtonIndex;
- (void)setCancelButtonIndex:(int)fp8;
- (int)cancelButtonIndex;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setKeepTopAlignment:(BOOL)fp8;
- (BOOL)keepTopAlignment;
- (id)contentView;
- (id)tintColor;
- (id)buttonTitleAtIndex:(int)fp8;
- (int)addButtonWithTitle:(id)fp8;
- (id)buttonCellForIndex:(int)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (_Bool)hasCancelButton;
- (void)setAttributedMessage:(id)fp8;
- (void)setMessage:(id)fp8;
- (void)setAttributedTitle:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)dismissWithClickedButtonIndex:(int)fp8 animated:(BOOL)fp12;
- (void)dealloc;
- (void)show;
- (void)orientationChanged:(id)fp8;
- (void)transformAlertContainerViewForOrientation;
- (id)springAnimationForKeyPath:(id)fp8;
- (void)setupWithSize:(struct CGSize)fp8;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)fp8;
- (void)setSize:(struct CGSize)fp8 animated:(BOOL)fp16;
- (void)setupWithAttributedTitle:(id)fp8 message:(id)fp12 cancelButtonTitle:(id)fp16 otherButtonTitles:(id)fp20;
- (void)setupWithTitle:(id)fp8 message:(id)fp12 cancelButtonTitle:(id)fp16 otherButtonTitles:(id)fp20;
- (id)initWithAttributedTitle:(id)fp8 attributedMessage:(id)fp12 delegate:(id)fp16 cancelButtonTitle:(id)fp20 otherButtonTitles:(id)fp24;
- (id)initWithTitle:(id)fp8 message:(id)fp12 delegate:(id)fp16 cancelButtonTitle:(id)fp20 otherButtonTitles:(id)fp24;
- (void)setTintColor:(id)fp8;
- (void)setButtonsShouldStack:(BOOL)fp8;
- (id)tableViewWithFrame:(struct CGRect)fp8;
- (void)keyboardWillShow:(id)fp8;
- (id)initWithViewController:(id)fp8;
- (id)initWithSize:(struct CGSize)fp8;

@end

