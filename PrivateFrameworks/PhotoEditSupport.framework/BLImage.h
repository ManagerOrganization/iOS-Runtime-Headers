/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIImage, UIImage;

@interface BLImage : NSObject <NSCopying> {
    struct CGImage { } *_CGImage;
    CIImage *_CIImage;
    UIImage *_UIImage;
    int _askedImageType;
    BOOL _isPlaceholder;
    int _obtainedImageType;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    int _storageType;
}

@property int askedImageType;
@property(readonly) int imageOrientation;
@property BOOL isPlaceholder;
@property(readonly) unsigned int memoryUsage;
@property int obtainedImageType;
@property(readonly) float scale;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) int storageType;

+ (id)abbreviatedDescriptionWithImageType:(int)arg1;
+ (id)descriptionWithImageType:(int)arg1;
+ (id)imageWithImage:(id)arg1;

- (struct CGImage { }*)CGImage;
- (id)CIImage;
- (id)UIImage;
- (int)askedImageType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)imageOrientation;
- (id)init;
- (id)initWithFileAtURL:(id)arg1;
- (BOOL)isPlaceholder;
- (unsigned int)memoryUsage;
- (int)obtainedImageType;
- (float)scale;
- (void)setAskedImageType:(int)arg1;
- (void)setIsPlaceholder:(BOOL)arg1;
- (void)setObtainedImageType:(int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (int)storageType;

@end
