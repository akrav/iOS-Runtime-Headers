/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, _UIRemoteViewController;

@interface _UISizeTrackingView : UIView <_UIRemoteViewFocusProxy, _UIScrollToTopView> {
    BOOL _hasIntrinsicContentSize;
    struct CGSize { 
        float width; 
        float height; 
    } _intrinsicContentSize;
    _UIRemoteViewController *_remoteViewController;
    id _textEffectsOperatorProxy;
    id _viewControllerOperatorProxy;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) _UIRemoteViewController * remoteViewController;
@property(readonly) Class superclass;

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;

- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)isScrollEnabled;
- (id)remoteViewController;
- (void)updateIntrinsicContentSize:(struct CGSize { float x1; float x2; })arg1;

@end
