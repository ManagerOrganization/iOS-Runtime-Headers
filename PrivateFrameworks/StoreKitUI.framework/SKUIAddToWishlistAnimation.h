/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIImage, UINavigationButton;

@interface SKUIAddToWishlistAnimation : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    UIImage *_image;
    UINavigationButton *_targetButton;
}

- (void).cxx_destruct;
- (void)animateWithCompletionBlock:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3;

@end
