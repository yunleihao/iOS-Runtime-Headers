/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSArray, NSString;

@interface TSCHMultiDataLayerAnimationValues : NSObject {
    NSString *mKey;
    NSArray *mKeyTimes;
    CALayer *mLayer;
    BOOL mNeedPresentationLayerValues;
    NSArray *mValues;
}

@property(readonly) NSString * key;
@property(readonly) NSArray * keyTimes;
@property(readonly) CALayer * layer;
@property(readonly) BOOL needPresentationLayerValues;
@property(readonly) NSArray * values;

+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;
- (id)key;
- (id)keyTimes;
- (id)layer;
- (BOOL)needPresentationLayerValues;
- (id)values;

@end
