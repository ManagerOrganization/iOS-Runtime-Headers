/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@class MSPBTimerContext, NSString, NSObject<OS_dispatch_queue>, <MSPowerBudgetDelegate>;

@interface MSPowerBudget : NSObject  {
    <MSPowerBudgetDelegate> *_delegate;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSString *_personID;
    BOOL _workQueueIsFileTransferAllowed;
    BOOL _workQueueIsExternalPowered;
    BOOL _workQueueIsForeground;
    MSPBTimerContext *_workQueuePushTimerContext;
    MSPBTimerContext *_workQueuePostForegroundTimerContext;
    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property <MSPowerBudgetDelegate> * delegate;
@property double maxActiveTimeAfterPush;
@property double maxActiveTimeAfterLossOfForeground;
@property double maxActiveTimeAfterGlobalResetSync;
@property(retain) NSString * focusAlbumGUID;
@property(retain) NSString * focusAssetCollectionGUID;
@property(retain) NSString * personID;
@property(setter=workQueueSetFileTransferAllowed:) BOOL workQueueIsFileTransferAllowed;
@property(setter=workQueueSetExternalPowered:) BOOL workQueueIsExternalPowered;
@property(setter=workQueueSetForeground:) BOOL workQueueIsForeground;
@property(retain) MSPBTimerContext * workQueuePushTimerContext;
@property(retain) MSPBTimerContext * workQueuePostForegroundTimerContext;
@property(retain) MSPBTimerContext * workQueueGlobalResetSyncTimerContext;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)init;
- (void)workQueueSetFileTransferAllowed:(BOOL)arg1;
- (BOOL)workQueueIsFileTransferAllowed;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (void)didEndExternalPower;
- (void)didBeginExternalPower;
- (void)didReceiveGlobalResetSync;
- (void)didEndForegroundFocus;
- (void)didBeginForegroundFocus;
- (void)didReceivePushNotification;
- (void)workQueueSetIsFileTransferAllowed:(BOOL)arg1;
- (BOOL)isFileTransferAllowed;
- (void)setMaxActiveTimeAfterLossOfForeground:(double)arg1;
- (double)maxActiveTimeAfterLossOfForeground;
- (void)setMaxActiveTimeAfterGlobalResetSync:(double)arg1;
- (double)maxActiveTimeAfterGlobalResetSync;
- (void)setMaxActiveTimeAfterPush:(double)arg1;
- (double)maxActiveTimeAfterPush;
- (void)workQueueSetExternalPowered:(BOOL)arg1;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (void)workQueueSetForeground:(BOOL)arg1;
- (double)workQueueMaxActiveTimeAfterPush;
- (void)setIsFileTransferAllowed:(BOOL)arg1;
- (BOOL)workQueueIsForeground;
- (BOOL)workQueueIsExternalPowered;
- (void)setWorkQueueGlobalResetSyncTimerContext:(id)arg1;
- (id)workQueueGlobalResetSyncTimerContext;
- (void)setWorkQueuePostForegroundTimerContext:(id)arg1;
- (id)workQueuePostForegroundTimerContext;
- (void)workQueueCommitPersistedValues;
- (void)setWorkQueuePushTimerContext:(id)arg1;
- (id)workQueuePushTimerContext;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;
- (id)focusAssetCollectionGUID;
- (id)focusAlbumGUID;
- (void)setWorkQueue:(id)arg1;
- (void)shutDown;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (id)workQueue;
- (void)setPersonID:(id)arg1;
- (id)personID;

@end