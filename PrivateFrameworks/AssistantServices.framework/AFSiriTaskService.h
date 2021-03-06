/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class <AFSiriTaskServiceDelegate>, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface AFSiriTaskService : NSObject <AFSiriTaskHandling, NSXPCListenerDelegate> {
    <AFSiriTaskServiceDelegate> *_delegate;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1;
+ (id)appTaskService;

- (void).cxx_destruct;
- (void)handleSiriTask:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
