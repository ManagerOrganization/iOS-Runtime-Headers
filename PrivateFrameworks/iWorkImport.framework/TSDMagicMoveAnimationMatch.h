/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSLock, TSDTextureSet;

@interface TSDMagicMoveAnimationMatch : NSObject {
    BOOL _didUseMorphTexture;
    BOOL _hasBeenTornDown;
    TSDTextureSet *_incomingTexture;
    BOOL _isMorphMatch;
    BOOL _isTextStyleIdenticalExceptSize;
    BOOL _isUsingMorphTexture;
    int _matchType;
    TSDTextureSet *_morphQueuedForDeletionTexture;
    TSDTextureSet *_morphQueuedTexture;
    TSDTextureSet *_morphTexture;
    NSLock *_morphTextureUpdateLock;
    TSDTextureSet *_outgoingTexture;
    float _outgoingTextureActionBuildFinalAngle;
    BOOL _shouldDisableTextMorphing;
}

@property(retain) TSDTextureSet * incomingTexture;
@property(readonly) BOOL isMatched;
@property BOOL isMorphMatch;
@property BOOL isTextStyleIdenticalExceptSize;
@property int matchType;
@property(retain) TSDTextureSet * outgoingTexture;
@property float outgoingTextureActionBuildFinalAngle;
@property BOOL shouldDisableTextMorphing;

+ (unsigned int)magicMoveMorphTexturesPerSecond;

- (void)addMorphTexture:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)incomingTexture;
- (id)initWithMatchType:(int)arg1 outgoingTexture:(id)arg2 incomingTexture:(id)arg3;
- (BOOL)isMatched;
- (BOOL)isMorphMatch;
- (BOOL)isTextStyleIdenticalExceptSize;
- (id)lockCurrentMorphTexture;
- (int)matchType;
- (id)outgoingTexture;
- (float)outgoingTextureActionBuildFinalAngle;
- (void)setIncomingTexture:(id)arg1;
- (void)setIsMorphMatch:(BOOL)arg1;
- (void)setIsTextStyleIdenticalExceptSize:(BOOL)arg1;
- (void)setMatchType:(int)arg1;
- (void)setOutgoingTexture:(id)arg1;
- (void)setOutgoingTextureActionBuildFinalAngle:(float)arg1;
- (void)setShouldDisableTextMorphing:(BOOL)arg1;
- (BOOL)shouldDisableTextMorphing;
- (void)teardown;
- (void)unlockCurrentMorphTexture;

@end
