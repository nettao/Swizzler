/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSMutableOrderedSet, NSString;

@interface FilteredSection : _ABAddressBookAddRecord
{
    NSString *_title;
    NSMutableOrderedSet *_items;
}

- (void)setItems:(id)fp8;
- (id)items;
- (void)setTitle:(id)fp8;
- (id)title;
- (id)init;
- (void)dealloc;

@end
