/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, NSArray;

@interface MPQueryPlaybackContext : MPPlaybackContext {
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
    BOOL _shouldRestartPlaybackIfQueueChanges;
    BOOL _shouldStartPlayback;
    unsigned int _startIndex;
}

@property(copy) NSArray * prefixMediaItems;
@property(readonly) MPMediaQuery * query;
@property BOOL shouldRestartPlaybackIfQueueChanges;
@property BOOL shouldStartPlayback;
@property unsigned int startIndex;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1;
- (id)prefixMediaItems;
- (id)query;
- (void)setPrefixMediaItems:(id)arg1;
- (void)setShouldRestartPlaybackIfQueueChanges:(BOOL)arg1;
- (void)setShouldStartPlayback:(BOOL)arg1;
- (void)setStartIndex:(unsigned int)arg1;
- (BOOL)shouldRestartPlaybackIfQueueChanges;
- (BOOL)shouldStartPlayback;
- (unsigned int)startIndex;

@end
