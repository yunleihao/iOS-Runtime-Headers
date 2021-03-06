/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<TSDAutoscrollDelegate>, NSTimer;

@interface TSDAutoscroll : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL mActive;
    unsigned int mCount;
    int mDirections;
    } mLastAutoscrollDelta;
    double mLastFired;
    } mPoint;
    double mRepeatInterval;
    NSObject<TSDAutoscrollDelegate> *mTarget;
    NSTimer *mTimer;
}

@property BOOL active;
@property unsigned int count;
@property int directions;
@property(readonly) struct CGPoint { float x1; float x2; } lastAutoscrollDelta;
@property struct CGPoint { float x1; float x2; } point;
@property double repeatInterval;
@property NSObject<TSDAutoscrollDelegate> * target;

+ (void)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint { float x1; float x2; })arg2;

- (BOOL)active;
- (unsigned int)count;
- (void)dealloc;
- (int)directions;
- (void)invalidate;
- (struct CGPoint { float x1; float x2; })lastAutoscrollDelta;
- (unsigned int)p_deltaForCount:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })point;
- (double)repeatInterval;
- (void)setActive:(BOOL)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setDirections:(int)arg1;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRepeatInterval:(double)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint { float x1; float x2; })arg2 directions:(int)arg3 repeatInterval:(double)arg4;
- (id)target;
- (void)timerFired:(id)arg1;

@end
