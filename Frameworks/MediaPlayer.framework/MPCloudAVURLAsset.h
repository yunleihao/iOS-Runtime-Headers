/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAssetDownloadSession;

@interface MPCloudAVURLAsset : AVURLAsset {
    AVAssetDownloadSession *_downloadSession;
    BOOL _isStreamingQuality;
}

@property AVAssetDownloadSession * downloadSession;
@property BOOL isStreamingQuality;

- (void).cxx_destruct;
- (void)dealloc;
- (id)downloadSession;
- (BOOL)isStreamingQuality;
- (void)setDownloadSession:(id)arg1;
- (void)setIsStreamingQuality:(BOOL)arg1;

@end
