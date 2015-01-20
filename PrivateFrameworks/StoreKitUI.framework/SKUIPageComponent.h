/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElement;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider> {
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property(readonly) long long componentType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString * metricsElementName;
@property long long metricsLocationPosition;
@property(getter=isMissingItemData,readonly) bool missingItemData;
@property(readonly) Class superclass;
@property(readonly) SKUIViewElement * viewElement;

- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(id)arg3;
- (void)_setMetricsLocationPosition:(long long)arg1;
- (long long)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (bool)isMissingItemData;
- (id)metricsElementName;
- (long long)metricsLocationPosition;
- (id)valueForMetricsField:(id)arg1;
- (id)viewElement;

@end