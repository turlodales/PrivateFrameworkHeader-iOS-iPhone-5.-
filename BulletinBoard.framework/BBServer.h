/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableSet, <BBPushDataProviderFactory>, NSDate, NSMutableArray, NSMutableDictionary;

@interface BBServer : NSObject <XPCProxyTarget> {
    NSMutableSet *_observers;
    NSMutableSet *_listObservers;
    NSMutableSet *_modalAlertObservers;
    NSMutableSet *_bannerObservers;
    NSMutableSet *_lockscreenObservers;
    NSMutableSet *_soundObservers;
    NSMutableSet *_settingsObservers;
    NSMutableSet *_settingsGateways;
    NSMutableArray *_sortedSectionIDs;
    unsigned int _sectionOrderRule;
    NSMutableDictionary *_sectionInfoByID;
    NSMutableDictionary *_sectionParametersByID;
    NSMutableDictionary *_sectionSortDescriptorsByID;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_transactionsByObserver;
    NSMutableDictionary *_listBulletinIDsBySectionID;
    NSMutableArray *_interruptingBulletinIDs;
    NSMutableArray *_expiringBulletinIDs;
    struct dispatch_source_s { } *_timer;
    NSDate *_nextScheduledFireDate;
    NSMutableDictionary *_dataProvidersBySection;
    NSMutableSet *_pushDataProviders;
    NSMutableDictionary *_clearedSections;
    <BBPushDataProviderFactory> *_pushDataProviderFactory;
    int _demo_lockscreen_token;
    NSMutableDictionary *_bulletinRequestsByID;
}

+ (void)initialize;

- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (id)_removalsForListSection:(id)arg1 addition:(id)arg2 keepAddition:(BOOL*)arg3;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (void)_loadDataProvidersAndSettings;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemWake;
- (void)_handleSystemSleep;
- (unsigned int)listBulletinCapForSectionID:(id)arg1;
- (void)removeBulletinID:(id)arg1 fromListSection:(id)arg2;
- (void)withdrawBulletinID:(id)arg1;
- (void)publishBulletin:(id)arg1 destinations:(int)arg2;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (id)_clearedSectionsPath;
- (id)_dataDirectoryPath;
- (id)_copyDefaultEnabledWeeAppIDs;
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)arg1;
- (void)_removePushDataProvider:(id)arg1;
- (void)_removeSection:(id)arg1;
- (void)_updatePushSettingsForPushDataProvider:(id)arg1;
- (id)_defaultSectionInfoForDataProvider:(id)arg1;
- (void)_addPushDataProvider:(id)arg1 sortNowAndNotifyObservers:(BOOL)arg2;
- (void)_addDataProvider:(id)arg1 sortSectionsNow:(BOOL)arg2;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (void)publishBulletinRequest:(id)arg1 destinations:(int)arg2;
- (void)updateListSection:(id)arg1 withBulletinRequests:(id)arg2;
- (BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (unsigned int)_filtersForSectionID:(id)arg1;
- (unsigned int)_countForSectionID:(id)arg1;
- (void)_sortSectionIDsUsingDefaultOrder;
- (void)_readSavedSectionOrder:(id*)arg1 andRule:(unsigned int*)arg2;
- (void)_loadAllWeeAppSections;
- (void)_publishBulletinsForAllDataProviders;
- (void)_loadAllDataProviderPluginBundles;
- (void)_loadClearedSections;
- (void)_loadSavedSectionInfo;
- (void)_ensureDataDirectoryExists;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_clearedInfoForSectionID:(id)arg1;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)_publishBulletinRequest:(id)arg1 forDataProvider:(id)arg2 forDestinations:(int)arg3;
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_sortSectionIDsUsingGuideArray:(id)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_writeSectionOrder;
- (id)_interruptingBulletinIDsForFeeds:(unsigned int)arg1;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (id)_sectionInfoArray:(BOOL)arg1;
- (void)_clearSection:(id)arg1;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (unsigned int)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (void)_scheduleTimerForDate:(id)arg1;
- (id)_nextExpireInterruptionsDate;
- (void)_expireInterruptions;
- (id)_nextExpireBulletinsDate;
- (void)_expireBulletins;
- (void)_sendUpdateSectionInfo:(id)arg1;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (id)listBulletinIDsForSectionID:(id)arg1;
- (void)_sendUpdateSectionOrder;
- (void)_writeSectionInfo;
- (id)_allBulletinsForSectionID:(id)arg1;
- (void)_updateBulletinsForDataProvider:(id)arg1;
- (void)_writeClearedSections;
- (id)_listBulletinsForSectionID:(id)arg1;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2;
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;
- (id)_currentTransactionForObserver:(id)arg1 bulletinID:(id)arg2;
- (unsigned int)_incrementedTransactionIDForObserver:(id)arg1 bulletinID:(id)arg2;
- (id)_observersForFeeds:(unsigned int)arg1;
- (void)_removeSettingsGateway:(id)arg1;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_removeBulletin:(id)arg1;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_addInterruptingBulletin:(id)arg1;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_modifyBulletin:(id)arg1;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_addBulletin:(id)arg1;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(int)arg2;
- (void)settingsGateway:(id)arg1 setSectionInfo:(id)arg2 forSectionID:(id)arg3;
- (void)settingsGateway:(id)arg1 setOrderedSectionIDs:(id)arg2;
- (void)settingsGateway:(id)arg1 setSectionOrderRule:(unsigned int)arg2;
- (void)settingsGateway:(id)arg1 getSectionInfoWithHandler:(id)arg2;
- (void)_clearTimer;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)_addSettingsGatewayWithConnection:(struct _xpc_connection_s { }*)arg1;
- (void)_addObserverWithConnection:(struct _xpc_connection_s { }*)arg1;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned int)arg3;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 getRecentUnacknowledgedBulletinsForFeeds:(unsigned int)arg2 withHandler:(id)arg3;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)observer:(id)arg1 requestListBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoWithHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)observer:(id)arg1 setObserverFeed:(unsigned int)arg2;
- (void)deliverResponse:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

@end
