/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@class NNMKSQLiteConnection, NNMKSyncedMailbox, NSDate, NSString;

@interface NNMKDeviceSyncRegistry : NSObject {
    NNMKSQLiteConnection *_database;
    NSDate *_dateReceivedCapForAdding;
    float _deviceScreenScale;
    float _deviceScreenWidth;
    unsigned int _fullMessagesSyncVersion;
    BOOL _isMessagesSyncActive;
    BOOL _isMoreMessagesRequestPending;
    BOOL _organizeByThread;
    NSString *_path;
    BOOL _protectedChannelSupported;
    NNMKSyncedMailbox *_syncedMailbox;
}

@property(retain) NNMKSQLiteConnection * database;
@property(retain) NSDate * dateReceivedCapForAdding;
@property float deviceScreenScale;
@property float deviceScreenWidth;
@property unsigned int fullMessagesSyncVersion;
@property BOOL isMessagesSyncActive;
@property BOOL isMoreMessagesRequestPending;
@property BOOL organizeByThread;
@property(readonly) NSString * path;
@property BOOL protectedChannelSupported;
@property(retain) NNMKSyncedMailbox * syncedMailbox;

- (void).cxx_destruct;
- (void)_deleteAllObjectsFromTable:(id)arg1;
- (void)_insureTransactionFor:(id)arg1;
- (void)_loadAllControlValues;
- (void)_removeControlValueForKey:(id)arg1;
- (id)_selectSyncedAccountsWhere:(id)arg1 blockForBinding:(id)arg2;
- (id)_selectSyncedMessagesIdsWhere:(id)arg1 count:(unsigned int)arg2 blockForBinding:(id)arg3;
- (id)_selectSyncedMessagesWhere:(id)arg1 blockForBinding:(id)arg2;
- (void)_setControlValueForKey:(id)arg1 withBlockForBinding:(id)arg2;
- (id)_ungroupGroupedValue:(id)arg1;
- (void)addObjectId:(id)arg1 objectType:(id)arg2 resendInterval:(unsigned int)arg3 forIDSIdentifierNotYetAckd:(id)arg4;
- (void)addOrUpdateSyncedAccount:(id)arg1;
- (void)addOrUpdateSyncedMessage:(id)arg1;
- (id)allSyncedAccountsKeyedByAccountId;
- (void)beginUpdates;
- (void)cleanUpForNewFullAccountsSync;
- (void)cleanUpForNewFullMessagesSync;
- (BOOL)containsSyncedMessageForMessageWithId:(id)arg1;
- (id)database;
- (id)dateReceivedCapForAdding;
- (id)datesForIDSIdentifiersScheduledToBeResent;
- (float)deviceScreenScale;
- (float)deviceScreenWidth;
- (void)endUpdates;
- (id)firstSyncedMessageIdsContentNotSyncedOrRequestedByUser:(unsigned int)arg1;
- (unsigned int)fullMessagesSyncVersion;
- (id)initWithPath:(id)arg1;
- (BOOL)isMessagesSyncActive;
- (BOOL)isMoreMessagesRequestPending;
- (void)markIDSIdentifierAsAckd:(id)arg1;
- (id)objectIdForIDSIdentifierNotYetAckd:(id)arg1 objectType:(id*)arg2 resendInterval:(unsigned int*)arg3;
- (id)oldestDateReceived;
- (BOOL)organizeByThread;
- (id)path;
- (BOOL)protectedChannelSupported;
- (void)removeSyncedAccountForAccountWithId:(id)arg1;
- (void)removeSyncedMessageForMessageWithId:(id)arg1;
- (void)removeSyncedMessagesBeforeDateReceived:(id)arg1 adjustDateReceivedCapForAdding:(BOOL)arg2;
- (void)rescheduleIDSIdentifier:(id)arg1 resendInterval:(unsigned int)arg2 withDateToResend:(id)arg3;
- (void)setDatabase:(id)arg1;
- (void)setDateReceivedCapForAdding:(id)arg1;
- (void)setDeviceScreenScale:(float)arg1;
- (void)setDeviceScreenWidth:(float)arg1;
- (void)setFullMessagesSyncVersion:(unsigned int)arg1;
- (void)setIsMessagesSyncActive:(BOOL)arg1;
- (void)setIsMoreMessagesRequestPending:(BOOL)arg1;
- (void)setMoreMessagesRequestPending:(BOOL)arg1;
- (void)setOrganizeByThread:(BOOL)arg1;
- (void)setProtectedChannelSupported:(BOOL)arg1;
- (void)setSyncedMailbox:(id)arg1;
- (id)syncedAccountForAccountWithId:(id)arg1;
- (id)syncedAccountIdsResendRequested;
- (id)syncedMailbox;
- (id)syncedMessageForMessageWithId:(id)arg1;
- (id)syncedMessageIdsContentRequestedByUser;
- (id)syncedMessageIdsResendRequested;
- (unsigned int)syncedMessagesCount;
- (id)syncedMessagesForConversationWithId:(id)arg1;
- (id)syncedMessagesStatusKeyedByMessageIdAfterDateReceived:(id)arg1;

@end
