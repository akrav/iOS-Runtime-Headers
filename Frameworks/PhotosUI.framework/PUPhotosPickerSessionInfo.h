/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString;

@interface PUPhotosPickerSessionInfo : PUSessionInfo {
    NSString *__targetAlbumName;
}

@property(setter=_setTargetAlbumName:,copy) NSString * _targetAlbumName;

- (void).cxx_destruct;
- (id)_initWithTargetAlbum:(struct NSObject { Class x1; }*)arg1 orTargetAlbumName:(id)arg2 isLocal:(BOOL)arg3;
- (void)_setTargetAlbumName:(id)arg1;
- (id)_targetAlbumName;
- (id)initWithTargetAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)initWithTargetAlbumName:(id)arg1 isLocal:(BOOL)arg2;
- (BOOL)isSelectingAssets;
- (id)localizedPrompt;

@end
