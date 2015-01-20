/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface ProcessElementParameters : NSObject {
    unsigned long long _maximumNumberOfElements;
    id _shouldAddElement;
    bool_didCutOffElements;
    bool_forSpeakThis;
    bool_grouped;
    bool_onlyIncludeVisible;
}

@property bool didCutOffElements;
@property bool forSpeakThis;
@property bool grouped;
@property unsigned long long maximumNumberOfElements;
@property bool onlyIncludeVisible;
@property(copy) id shouldAddElement;

- (void)dealloc;
- (bool)didCutOffElements;
- (bool)forSpeakThis;
- (bool)grouped;
- (unsigned long long)maximumNumberOfElements;
- (bool)onlyIncludeVisible;
- (void)setDidCutOffElements:(bool)arg1;
- (void)setForSpeakThis:(bool)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setMaximumNumberOfElements:(unsigned long long)arg1;
- (void)setOnlyIncludeVisible:(bool)arg1;
- (void)setShouldAddElement:(id)arg1;
- (id)shouldAddElement;

@end