/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class <TRTransferBrowserDelegate>, NSObject<OS_dispatch_queue>, NSString, WPTransfer;

@interface TRTransferBrowser : NSObject <WPTransferDelegate> {
    struct { struct _CCCryptor {} *x1; unsigned char x2[16]; unsigned char x3[16]; unsigned int x4; } *_aesContext;
    <TRTransferBrowserDelegate> *_delegate;
    struct AirPlayPairingSessionPrivate { } *_pairingSession;
    int _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    int _scannerState;
    BOOL _started;
    int _state;
    WPTransfer *_transferSession;
}

@property(copy,readonly) NSString * debugDescription;
@property <TRTransferBrowserDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) int state;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginScanningIfPowered;
- (void)_didFinishPairing;
- (id)_didReceiveEncryptedData:(id)arg1;
- (long)_runSetupStepWithInput:(const void*)arg1 inputLength:(unsigned long)arg2 outputData:(id*)arg3;
- (long)_runVerifyStepWithInput:(const void*)arg1 inputLength:(unsigned long)arg2 outputData:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)start;
- (int)state;
- (void)stop;
- (void)transferComplete;
- (void)transferDidFailToStartAdvertising:(id)arg1;
- (void)transferDidFailToStartScanning:(id)arg1;
- (void)transferDidFailWithError:(id)arg1;
- (id)transferDidReceiveData:(id)arg1;
- (void)transferDidUpdateAdvertiserState:(id)arg1;
- (void)transferDidUpdateScannerState:(id)arg1;

@end
