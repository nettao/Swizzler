//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "ArchiveEntry.h"

@class NSData, NSString;

@interface ZipEntry : ArchiveEntry
{
    NSData *zipData;
    NSString *leadingPath;
    unsigned int headerOffset;
    unsigned int CRC;
    unsigned int compressionType;
    unsigned int bytesToRead;
    unsigned int bytesToWrite;
    unsigned int dataOffset;
    unsigned int needVersion;
    unsigned int bitflags;
    unsigned short lastModTime;
    unsigned int key[3];
    BOOL isEncrypted;
}

@property(readonly) unsigned int compressionType; // @synthesize compressionType;
@property(readonly) unsigned int CRC; // @synthesize CRC;
@property(readonly) unsigned int headerOffset; // @synthesize headerOffset;
- (void)dealloc;
- (id)extract;
- (id)extractWithPasswd:(id)arg1;
- (unsigned char)pwdDecryptByte:(const char *)arg1;
- (void)pwdKeyInitialize:(id)arg1;
- (void)pwdUpdateKeys:(unsigned char)arg1;
- (BOOL)hasPassword;
- (BOOL)addToRootEntry:(id)arg1 withID:(int)arg2;
- (id)childDirectoryEntryWithName:(id)arg1 createIfNotPresent:(BOOL)arg2;
- (BOOL)addChildEntry:(id)arg1;
- (int)compare:(id)arg1;
- (id)path;
- (void)readHeader;
- (id)initWithData:(id)arg1 path:(id)arg2 headerOffset:(unsigned int)arg3 CRC:(unsigned int)arg4 compressedSize:(unsigned int)arg5 uncompressedSize:(unsigned int)arg6 compressionType:(unsigned int)arg7 encrypted:(BOOL)arg8;

@end

