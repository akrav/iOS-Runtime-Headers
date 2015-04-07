/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSCalendar, NSColor, NSData, NSFileWrapper, NSFont, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableData, NSMutableDictionary, NSMutableParagraphStyle, NSTextTable;

@interface NSRTFReader : NSObject {
    struct _NSAttributeInfo { 
        unsigned int toUniCharEncoding; 
        unsigned int codePageEncoding; 
        NSFont *font; 
        float fontSize; 
        float kern; 
        NSMutableParagraphStyle *paraStyle; 
        unsigned int bold : 1; 
        unsigned int italic : 1; 
        unsigned int fontIsValid : 1; 
        unsigned int paraStyleIsValid : 1; 
        unsigned int kernIsValid : 1; 
        unsigned int attributesSameAsBefore : 1; 
        unsigned int multiByteEncoding : 1; 
        unsigned int unicodeAlternativeLength : 3; 
        unsigned int tabStopType : 4; 
        unsigned int curAttributesNeedsCopying : 1; 
        unsigned int paraStyleNeedsCopying : 1; 
        unsigned int hasWritingDirectionAttribute : 1; 
        unsigned int  : 15; 
    } _attributeInfo;
    NSMutableData *_attributeInfoStack;
    NSMutableArray *_attributesStack;
    float _bMargin;
    NSMapTable *_cachedRTFFontTable;
    int _cocoaSubVersion;
    int _cocoaVersion;
    NSMutableAttributedString *_curAttributedString;
    NSMutableDictionary *_curAttributes;
    unsigned int _currentBorderEdge;
    BOOL _currentBorderIsTable;
    int _currentColumn;
    int _currentDefinitionColumn;
    int _currentListLevel;
    int _currentListNumber;
    int _currentRow;
    NSMutableArray *_currentRowArray;
    BOOL _currentRowIsLast;
    NSTextTable *_currentTable;
    float _defaultTabInterval;
    unsigned long _defaultToUniCharEncoding;
    NSFileWrapper *_document;
    NSColor *_documentBackgroundColor;
    NSMutableDictionary *_documentInfoDictionary;
    BOOL _explicitCharSetEncountered;
    NSMutableDictionary *_fontAttributesTable;
    NSMutableDictionary *_fontTable;
    NSCalendar *_gregorianCalendar;
    float _hyphenationFactor;
    BOOL _isRTLDocument;
    float _lMargin;
    NSMutableArray *_layoutOrientationSections;
    unsigned int _level;
    BOOL _limitReached;
    NSMutableDictionary *_listDefinitions;
    NSMutableArray *_nestedTables;
    struct CGSize { 
        float width; 
        float height; 
    } _paperSize;
    NSMutableArray *_previousRowArray;
    NSTextTable *_previousTable;
    struct _NSRTFPriv { 
        void *reader; 
        char *rtfInput; 
        unsigned int rtfInputLength; 
        unsigned int rtfInputLocation; 
        unsigned int rtfHeaderEndLocation; 
        int pushedChar; 
        int pushedClass; 
        int pushedMajor; 
        int pushedMinor; 
        int pushedParam; 
        BOOL pushedTextBuf[1024]; 
        int prevChar; 
        int bumpLine; 
        struct RTFFont {} *fontList; 
        struct RTFColor {} *colorList; 
        struct RTFStyle {} *styleList; 
        char *inputName; 
        char *outputName; 
        int (*ccb[5])(); 
        int (*readHook)(); 
        int (*msgProc)(); 
        int (*panicProc)(); 
        BOOL textBuf[1024]; 
        int textLen; 
        int class; 
        int major; 
        int minor; 
        int param; 
        int lineNum; 
        int linePos; 
        int groupState; 
    } _private;
    float _rMargin;
    int _readLimit;
    int _readOnly;
    NSData *_rtfData;
    int _rtfVersion;
    BOOL _setTableCells;
    float _tMargin;
    NSArray *_textBlocks;
    union { 
        unsigned char thin[128]; 
        unsigned short fat[128]; 
    } _textBuffer;
    BOOL _textBufferContentsIsFat;
    unsigned int _textBufferIndex;
    unsigned char _textFlow;
    int _thumbnailLimit;
    NSMutableAttributedString *_topAttributedString;
    int _usesScreenFonts;
    unsigned int _verticalOrientationLocation;
    int _viewKind;
    int _viewScale;
    struct CGSize { 
        float width; 
        float height; 
    } _viewSize;
}

- (id)_RTFDFileWrapper;
- (void)_addListDefinition:(id)arg1 forKey:(int)arg2;
- (void)_addOverride:(int)arg1 forKey:(int)arg2;
- (void)_beginTableRow;
- (void)_clearTableCells;
- (unsigned int)_currentBorderEdge;
- (BOOL)_currentBorderIsTable;
- (int)_currentListLevel;
- (int)_currentListNumber;
- (id)_currentTable;
- (id)_currentTableCell;
- (BOOL)_currentTableCellIsPlaceholder;
- (id)_documentInfoDictionary;
- (void)_endTableCell;
- (void)_endTableCellDefinition;
- (void)_endTableRow;
- (void)_ensureTableCells;
- (void)_lastTableRow;
- (id)_listDefinitions;
- (void)_mergeTableCellsHorizontally;
- (void)_mergeTableCellsVertically;
- (id)_mutableParagraphStyle;
- (void)_paragraphInTable;
- (void)_popState;
- (void)_popTableState;
- (void)_pushState;
- (void)_pushTableState;
- (void)_setCurrentBorderEdge:(unsigned int)arg1 isTable:(BOOL)arg2;
- (void)_setCurrentListLevel:(int)arg1;
- (void)_setCurrentListNumber:(int)arg1;
- (void)_setRTFDFileWrapper:(id)arg1;
- (void)_setTableCells;
- (void)_setTableNestingLevel:(int)arg1;
- (void)_startTableRowDefinition;
- (void)_updateAttributes;
- (id)attributedString;
- (id)attributedStringToEndOfGroup;
- (id)attributesAtEndOfGroup;
- (int)baseWritingDirection;
- (int)cocoaSubVersion;
- (int)cocoaVersion;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (float)defaultTabInterval;
- (id)documentAttributes;
- (void)finalize;
- (float)floatCocoaVersion;
- (id)initWithPath:(id)arg1;
- (id)initWithRTF:(id)arg1;
- (id)initWithRTFD:(id)arg1;
- (id)initWithRTFDFileWrapper:(id)arg1;
- (id)mutableAttributedString;
- (id)mutableAttributes;
- (struct CGSize { float x1; float x2; })paperSize;
- (void)processString:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setCocoaSubVersion:(int)arg1;
- (void)setCocoaVersion:(int)arg1;
- (void)setDefaultTabInterval:(float)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setMutableAttributedString:(id)arg1;
- (void)setPaperSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setReadLimit:(int)arg1;
- (void)setReadOnly:(int)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTextFlow:(unsigned int)arg1;
- (void)setThumbnailLimit:(int)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setUsesScreenFonts:(int)arg1;
- (void)setViewKind:(int)arg1;
- (void)setViewScale:(int)arg1;
- (void)setViewSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)textFlow;
- (struct CGSize { float x1; float x2; })viewSize;

@end