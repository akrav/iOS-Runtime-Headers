/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKUIEventStatusButtonsViewDelegate>, NSArray, UIButton, UIFont;

@interface EKUIEventStatusButtonsView : UIView {
    NSArray *_actions;
    float _baselineFromBoundsTop;
    NSArray *_buttons;
    float _buttonsCharge;
    <EKUIEventStatusButtonsViewDelegate> *_delegate;
    BOOL _disableButtonHighlights;
    UIFont *_font;
    BOOL _forcesSingleButtonToCenter;
    int _selectedAction;
    int _textSizeMode;
}

@property(retain) NSArray * actions;
@property float baselineFromBoundsTop;
@property float buttonsCharge;
@property(readonly) UIButton * centerButton;
@property <EKUIEventStatusButtonsViewDelegate> * delegate;
@property BOOL disableButtonHighlights;
@property(readonly) UIFont * font;
@property BOOL forcesSingleButtonToCenter;
@property int selectedAction;
@property int textSizeMode;

- (void).cxx_destruct;
- (int)_actionForButton:(id)arg1;
- (id)_buttonForAction:(int)arg1;
- (int)_buttonIndexForAction:(int)arg1;
- (id)_buttonTitleForAction:(int)arg1;
- (float)_defaultFontSizeForButtons;
- (id)_fontWithSize:(float)arg1 selected:(BOOL)arg2;
- (float)_minimumFontSize;
- (id)_newToolbarButton;
- (void)_setupButtons;
- (BOOL)_shouldCenterButton;
- (void)_updateButtonFontsWithSize:(float)arg1;
- (void)_updateSelectionToButton:(id)arg1;
- (id)actions;
- (float)baselineFromBoundsTop;
- (void)buttonTapped:(id)arg1;
- (float)buttonsCharge;
- (id)centerButton;
- (id)delegate;
- (BOOL)disableButtonHighlights;
- (id)font;
- (BOOL)forcesSingleButtonToCenter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 actions:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (int)selectedAction;
- (void)setActions:(id)arg1;
- (void)setBaselineFromBoundsTop:(float)arg1;
- (void)setButtonsCharge:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableButtonHighlights:(BOOL)arg1;
- (void)setForcesSingleButtonToCenter:(BOOL)arg1;
- (void)setSelectedAction:(int)arg1;
- (void)setTextSizeMode:(int)arg1;
- (int)textSizeMode;
- (void)updateForMiniBarState:(BOOL)arg1;

@end
