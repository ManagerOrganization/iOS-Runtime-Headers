/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class UIColor, UIImage;

@interface MPUTransportButtonAttributes : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _expandedTouchRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    UIColor *_highlightedButtonColor;
    UIImage *_image;
    UIColor *_normalButtonColor;
    UIColor *_selectedButtonColor;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } expandedTouchRect;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(retain) UIColor * highlightedButtonColor;
@property(retain) UIImage * image;
@property(retain) UIColor * normalButtonColor;
@property(retain) UIColor * selectedButtonColor;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedTouchRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)highlightedButtonColor;
- (id)image;
- (id)normalButtonColor;
- (id)selectedButtonColor;
- (void)setExpandedTouchRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightedButtonColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setNormalButtonColor:(id)arg1;
- (void)setSelectedButtonColor:(id)arg1;

@end
