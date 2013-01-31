/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSText : UIView  {
}

+ (void)initialize;

- (void)ignoreSpelling:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (BOOL)isRulerVisible;
- (void)toggleRuler:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (void)unscript:(id)arg1;
- (void)underline:(id)arg1;
- (void)superscript:(id)arg1;
- (void)subscript:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)pasteRuler:(id)arg1;
- (void)pasteFont:(id)arg1;
- (void)copyRuler:(id)arg1;
- (void)copyFont:(id)arg1;
- (void)setVerticallyResizable:(BOOL)arg1;
- (BOOL)isVerticallyResizable;
- (void)setHorizontallyResizable:(BOOL)arg1;
- (BOOL)isHorizontallyResizable;
- (void)setMinSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })minSize;
- (void)setUsesFontPanel:(BOOL)arg1;
- (BOOL)usesFontPanel;
- (void)setFont:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setTextColor:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)isFieldEditor;
- (void)setFieldEditor:(BOOL)arg1;
- (void)setImportsGraphics:(BOOL)arg1;
- (BOOL)importsGraphics;
- (void)setRichText:(BOOL)arg1;
- (BOOL)isRichText;
- (BOOL)readRTFDFromFile:(id)arg1;
- (BOOL)writeRTFDToFile:(id)arg1 atomically:(BOOL)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withRTFD:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withRTF:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)RTFFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)setString:(id)arg1;
- (id)string;
- (int)baseWritingDirection;
- (void)setSelectable:(BOOL)arg1;
- (void)delete:(id)arg1;
- (BOOL)drawsBackground;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setEditable:(BOOL)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setBaseWritingDirection:(int)arg1;
- (void)sizeToFit;
- (id)backgroundColor;
- (int)alignment;
- (id)font;
- (void)setAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (BOOL)isEditable;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)isSelectable;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })maxSize;

@end