/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class <NSObject>, CKDClientContext, CKDClientProxy, CKDOperation, CKDURLRequest, CKOperationResult, NSDate, NSError, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

@interface CKDOperation : NSOperation <CKDFlowControllable> {
    BOOL _allowsCellularAccess;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableArray *_childOperations;
    CKDClientContext *_context;
    NSString *_deviceIdentifier;
    NSError *_error;
    NSMutableArray *_finishedChildOperationIDs;
    BOOL _isExecuting;
    BOOL _isFinished;
    NSString *_operationID;
    CKDOperation *_parentOperation;
    NSString *_parentSectionID;
    <NSObject> *_powerAssertion;
    CKDClientProxy *_proxy;
    CKDURLRequest *_request;
    NSMutableArray *_requestUUIDs;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSDate *_startDate;
    unsigned int _state;
    NSObject<OS_dispatch_group> *_stateTransitionGroup;
    BOOL _useEncryption;
    BOOL _usesBackgroundSession;
}

@property(readonly) unsigned int QOSClass;
@property BOOL allowsCellularAccess;
@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(retain) NSMutableArray * childOperations;
@property(retain) CKDClientContext * context;
@property(retain) NSString * deviceIdentifier;
@property(retain) NSError * error;
@property(retain) NSMutableArray * finishedChildOperationIDs;
@property(readonly) NSString * flowControlKey;
@property BOOL isExecuting;
@property BOOL isFinished;
@property(readonly) NSString * operationID;
@property(readonly) CKOperationResult * operationResult;
@property CKDOperation * parentOperation;
@property(retain) NSString * parentSectionID;
@property(retain) <NSObject> * powerAssertion;
@property CKDClientProxy * proxy;
@property(retain) CKDURLRequest * request;
@property(retain) NSMutableArray * requestUUIDs;
@property(readonly) NSString * sectionID;
@property(readonly) BOOL shouldCheckAppVersion;
@property(retain) NSString * sourceApplicationBundleIdentifier;
@property(retain) NSString * sourceApplicationSecondaryIdentifier;
@property(retain) NSDate * startDate;
@property unsigned int state;
@property(retain) NSObject<OS_dispatch_group> * stateTransitionGroup;
@property BOOL useEncryption;
@property BOOL usesBackgroundSession;

+ (id)_globalOperationCallbackQueueForQOS:(int)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (unsigned int)QOSClass;
- (BOOL)_checkAppVersion;
- (void)_continueOperationStart;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)addAndRunChildOperation:(id)arg1;
- (BOOL)allowsCellularAccess;
- (id)callbackQueue;
- (void)cancel;
- (id)childOperations;
- (void)configureRequest:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)error;
- (void)fillOutOperationResult:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)finishedChildOperationIDs;
- (id)flowControlKey;
- (unsigned int)hash;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)makeStateTransition:(BOOL)arg1;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (id)newChildOperationInfoOfClass:(Class)arg1;
- (id)operationID;
- (id)operationResult;
- (Class)operationResultClass;
- (BOOL)operationShouldBeFlowControlled;
- (id)parentOperation;
- (id)parentSectionID;
- (id)powerAssertion;
- (id)proxy;
- (id)request;
- (id)requestUUIDs;
- (id)sectionID;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setChildOperations:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishedChildOperationIDs:(id)arg1;
- (void)setIsExecuting:(BOOL)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPowerAssertion:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateTransitionGroup:(id)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (void)setUsesBackgroundSession:(BOOL)arg1;
- (BOOL)shouldCheckAppVersion;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)startDate;
- (unsigned int)state;
- (id)stateTransitionGroup;
- (BOOL)useEncryption;
- (BOOL)usesBackgroundSession;

@end
