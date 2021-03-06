/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, TSUImage;

@interface TSKHighlightController : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _canvasTransform;
    CALayer *_containingLayer;
    TSUImage *_image;
    CALayer *_imageLayer;
    } _layerTransform;
    } _overallRect;
    struct CGPath { } *_path;
    float _viewScale;
}

@property(retain) TSUImage * image;
@property(readonly) CALayer * layer;
@property struct CGPath { }* path;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property float viewScale;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })buildLayersForPath:(struct CGPath { }*)arg1 withImage:(id)arg2;
- (void)createLayerWithZOrder:(float)arg1 contentsScaleForLayers:(float)arg2;
- (void)dealloc;
- (void)disconnect;
- (BOOL)drawRoundedRect;
- (void)hide;
- (id)image;
- (id)layer;
- (struct CGPath { }*)path;
- (void)reset;
- (void)setCanvasTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 layerTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)setImage:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setViewScale:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (float)viewScale;

@end
