/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, PHCollectionList, PUAlbumListViewController, PUAlbumPickerSessionInfo, PUAlbumPickerViewControllerSpec, UINavigationController;

@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver, UINavigationControllerDelegate> {
    PUAlbumListViewController *__albumListViewController;
    PUAlbumPickerSessionInfo *_albumPickerSessionInfo;
    PHCollectionList *_collectionList;
    id _completionHandler;
    UINavigationController *_contentNavigationController;
    PUAlbumPickerViewControllerSpec *_spec;
}

@property(setter=_setAlbumListViewController:,retain) PUAlbumListViewController * _albumListViewController;
@property(retain) PUAlbumPickerSessionInfo * albumPickerSessionInfo;
@property(retain) PHCollectionList * collectionList;
@property(copy) id completionHandler;
@property(retain) UINavigationController * contentNavigationController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) PUAlbumPickerViewControllerSpec * spec;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_albumListViewController;
- (void)_setAlbumListViewController:(id)arg1;
- (void)_setContentNavigationController:(id)arg1;
- (void)_setSessionInfo:(id)arg1;
- (void)_setSpec:(id)arg1;
- (id)albumPickerSessionInfo;
- (id)collectionList;
- (id)completionHandler;
- (id)contentNavigationController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;
- (void)loadView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (void)setCollectionList:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)spec;
- (unsigned int)supportedInterfaceOrientations;

@end
