//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface GoodTrustServicesHandlerContext : NSObject
{
    id <GoodTrustServicesHandlerObserver> _observer;
    int _service;
}

+ (id)base64ToPlainData:(id)arg1;
@property(nonatomic) int service; // @synthesize service=_service;
@property(retain, nonatomic) id <GoodTrustServicesHandlerObserver> observer; // @synthesize observer=_observer;
- (void)requestCanceled;
- (void)errorOccured:(int)arg1 withType:(int)arg2;
- (void)requestSent:(id)arg1;
- (void)responseReceived:(id)arg1;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 andService:(int)arg2;

@end

