/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSString, RCAudioRouteBarButton, RCAudioRouteBarButtonContainer;

@interface RCAudioRouteBarButtonItem : UIBarButtonItem <UIAppearanceContainer> {
    RCAudioRouteBarButton *_button;
    RCAudioRouteBarButtonContainer *_contentView;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)newAudioRouteItem;

- (void).cxx_destruct;
- (void)_audioRouteControllerAvailableRoutesMaskDidChangeNotification:(id)arg1;
- (void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1;
- (void)_routeButtonAction;
- (void)_showAvailableRoutesAction;
- (void)_toggleSpeakerAction;
- (void)dealloc;
- (id)initAudioRouteItem;

@end
