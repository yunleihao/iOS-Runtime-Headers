/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class <CAMAvalancheSessionDelegate>, CAMInflightAsset, CIBurstImageSet, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CAMAvalancheSession : NSObject {
    NSMutableDictionary *__assets;
    CIBurstImageSet *__burstImageSet;
    NSDate *__expirationDate;
    NSObject<OS_dispatch_queue> *__expirationQueue;
    NSObject<OS_dispatch_source> *__expirationTimer;
    <CAMAvalancheSessionDelegate> *_delegate;
    unsigned int _numberOfPhotos;
    CAMInflightAsset *_possibleAvalancheAsset;
    int _state;
    int _type;
    NSString *_uuid;
}

@property(readonly) NSMutableDictionary * _assets;
@property(readonly) CIBurstImageSet * _burstImageSet;
@property(setter=_setExpirationDate:,retain) NSDate * _expirationDate;
@property(readonly) NSObject<OS_dispatch_queue> * _expirationQueue;
@property(readonly) NSObject<OS_dispatch_source> * _expirationTimer;
@property <CAMAvalancheSessionDelegate> * delegate;
@property(readonly) unsigned int numberOfPhotos;
@property(retain) CAMInflightAsset * possibleAvalancheAsset;
@property int state;
@property(readonly) int type;
@property(copy,readonly) NSString * uuid;

- (void).cxx_destruct;
- (id)_assets;
- (id)_burstImageSet;
- (void)_didTransitionToState:(int)arg1;
- (BOOL)_ensureValidStateChange:(int)arg1;
- (id)_expirationDate;
- (id)_expirationQueue;
- (id)_expirationTimer;
- (void)_expirationTimerFired;
- (void)_setExpirationDate:(id)arg1;
- (void)_setPossibleAvalancheAsset:(id)arg1;
- (void)_setState:(int)arg1;
- (void)_setupExpirationTimer;
- (void)_teardownExpirationTimer;
- (void)_transitionToState:(int)arg1;
- (void)addAssetForAnalysis:(id)arg1 withIOSurface:(struct __IOSurface { }*)arg2 metadata:(id)arg3 completionHandler:(id)arg4;
- (id)allAssetIdentifiers;
- (id)assetWithUUID:(id)arg1;
- (id)assetsWithUUIDs:(id)arg1;
- (id)bestAssetIndentifiers;
- (void)dealloc;
- (id)delegate;
- (BOOL)extend;
- (void)finalizeWithAnalysis:(BOOL)arg1;
- (id)init;
- (id)initWithType:(int)arg1;
- (unsigned int)numberOfPhotos;
- (id)possibleAvalancheAsset;
- (void)setDelegate:(id)arg1;
- (id)stackAssetIdentifier;
- (int)state;
- (int)type;
- (id)uuid;

@end
