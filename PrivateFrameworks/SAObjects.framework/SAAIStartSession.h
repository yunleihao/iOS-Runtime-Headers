/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAAIStartSession : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * acousticIdSessionId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)startSession;
+ (id)startSessionWithDictionary:(id)arg1 context:(id)arg2;

- (id)acousticIdSessionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAcousticIdSessionId:(id)arg1;

@end
