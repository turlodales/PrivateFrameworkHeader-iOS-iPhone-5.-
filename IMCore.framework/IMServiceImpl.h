/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMAccount, NSArray, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface IMServiceImpl : IMService  {
    NSString *_name;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSMutableDictionary *_cardMap;
    NSDictionary *_personToIDMap;
    IMAccount *_bestAccount;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
    NSDictionary *_defaultSettings;
    NSData *_imageData;
    id _icon;
    NSArray *_abProperties;
    NSArray *_emailDomains;
    unsigned int _screenNameSensitivity;
    BOOL _iconChecked;
    BOOL _hasLoadedServiceProperties;
    BOOL _handlesChatInvites;
    BOOL _supportsSMS;
    BOOL _supportsPhoneNumberMapping;
    BOOL _supportsAuthorization;
    BOOL _supportsRegistration;
    BOOL _supportsAdding;
    BOOL _shouldInternationalizeNumbers;
    BOOL _isPersistent;
    BOOL _isPlugInService;
    BOOL _allowsMultipleConnections;
}

@property(retain) NSDictionary * serviceProperties;
@property(retain) NSDictionary * serviceDefaults;
@property(readonly) NSString * internalName;
@property(readonly) NSDictionary * cardMap;
@property(readonly) NSArray * accountIDs;
@property(readonly) BOOL supportsAdding;
@property(readonly) BOOL supportsRegistration;
@property(readonly) BOOL supportsAuthorization;
@property(readonly) BOOL supportsPhoneNumberMapping;
@property(readonly) BOOL wantsInternationizedNumbers;
@property(readonly) BOOL isPersistent;
@property(readonly) BOOL isPlugInService;
@property(readonly) unsigned int IDSensitivity;
@property(readonly) NSArray * addressBookProperties;
@property(readonly) NSString * addressBookProperty;
@property(readonly) NSArray * emailDomains;
@property(readonly) NSString * name;
@property(readonly) NSString * shortName;
@property(readonly) BOOL allowsMultipleConnections;
@property(readonly) int buddyNotesMaxByteLength;
@property(readonly) NSString * description;
@property(retain) NSDictionary * defaultAccountSettings;
@property(readonly) BOOL handlesChatInvites;
@property(readonly) NSData * serviceImageData;
@property(readonly) Class accountClass;

+ (BOOL)systemSupportsSMSSending;
+ (id)supportedCountryCodes;
+ (void)setServiceClass:(Class)arg1;
+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;

- (id)shortName;
- (id)emailDomains;
- (id)addressBookProperties;
- (unsigned int)IDSensitivity;
- (BOOL)allowsMultipleConnections;
- (BOOL)isPlugInService;
- (BOOL)supportsAdding;
- (BOOL)supportsRegistration;
- (BOOL)handlesChatInvites;
- (BOOL)supportsAuthorization;
- (BOOL)wantsInternationizedNumbers;
- (void)setDefaultAccountSettings:(id)arg1;
- (id)defaultAccountSettings;
- (void)setServiceDefaults:(id)arg1;
- (id)serviceDefaults;
- (void)defaultsChanged:(id)arg1;
- (id)_personToIDMap;
- (id)imABPeopleWithScreenName:(id)arg1;
- (void)updateIDToCardMapWithNotification:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (id)accountIDs;
- (int)buddyNotesMaxByteLength;
- (id)addressBookProperty;
- (id)serviceImageData;
- (id)subtypeInformationForAccount:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (int)compareNames:(id)arg1;
- (id)normalizedFormOfID:(id)arg1;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (void)doneSetup;
- (void)accountInitialSyncPerformed:(id)arg1;
- (id)cardMap;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int*)arg2;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int*)arg3;
- (void)_dumpCardMap;
- (id)_newIDToCardMap;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (BOOL)supportsPhoneNumberMapping;
- (void)_loadPropertiesIfNeeded;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)clearIDToCardMap;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)_syncWithRemoteBuddies;
- (void)activeAccountsChanged:(id)arg1;
- (id)myScreenNames;
- (id)screenNamesForPerson:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)localizedShortName;
- (BOOL)initialSyncPerformed;
- (id)infoForScreenName:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (void)disconnect;
- (BOOL)isPersistent;
- (id)localizedName;
- (id)name;
- (BOOL)isEnabled;
- (id)initWithName:(id)arg1;
- (unsigned int)status;
- (id)description;
- (void)dealloc;
- (Class)accountClass;
- (id)internalName;
- (id)serviceProperties;

@end
