/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDLayout, TSWPAttachment;

@interface TSWPTypesetterAttachmentMap : NSObject {
    TSWPAttachment *_attachment;
    TSDLayout *_layout;
    BOOL _layoutNeedsRevalidation;
    struct __CTLine { } *_lineRef;
}

@property TSWPAttachment * attachment;
@property(retain) TSDLayout * layout;
@property BOOL layoutNeedsRevalidation;
@property(readonly) struct __CTLine { }* lineRef;

+ (id)mapWithAttachment:(id)arg1 layout:(id)arg2 pageNumber:(unsigned int)arg3 pageCount:(unsigned int)arg4 footnoteMarkProvider:(id)arg5 styleProvider:(id)arg6 colorOverride:(id)arg7 textScalePercent:(unsigned int)arg8;

- (id)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)layout;
- (BOOL)layoutNeedsRevalidation;
- (struct __CTLine { }*)lineRef;
- (void)setAttachment:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutNeedsRevalidation:(BOOL)arg1;

@end
