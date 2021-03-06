/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIKeyboardCandidateListDelegate>, NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives, _UIDynamicCaretHelpLabel, _UIDynamicCaretInput, _UIDynamicCaretNoContentView;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    _UIDynamicCaretAlternatives *_alternativesView;
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    TIKeyboardCandidateResultSet *_candidateSet;
    _UIDynamicCaretHelpLabel *_helpLabel;
    _UIDynamicCaretInput *_inputView;
    BOOL _justDeleted;
    _UIDynamicCaretNoContentView *_noContentView;
    int _selectedIndex;
}

@property(retain) _UIDynamicCaretAlternatives * alternativesView;
@property(retain) TIKeyboardCandidateResultSet * candidateSet;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) _UIDynamicCaretHelpLabel * helpLabel;
@property(retain) _UIDynamicCaretInput * inputView;
@property BOOL isActive;
@property(retain) _UIDynamicCaretNoContentView * noContentView;
@property(readonly) Class superclass;

- (void)alternativeTappedAtIndex:(int)arg1;
- (id)alternativesView;
- (id)backgroundImage;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateSet;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)displayAlternatives:(BOOL)arg1;
- (BOOL)hasCandidates;
- (id)helpLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputView;
- (BOOL)isActive;
- (BOOL)isDeleteCandidate:(id)arg1;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (void)layoutSubviews;
- (id)noContentView;
- (unsigned int)selectedSortIndex;
- (void)setAlternativesView:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setDocumentHasContent:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHelpLabel:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)statisticsIdentifier;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
