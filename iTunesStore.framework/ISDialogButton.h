/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISDialogButton : NSObject  {
    int _actionType;
    id _parameter;
    NSString *_title;
    int _urlType;
}

@property int actionType;
@property(retain) id parameter;
@property(retain) NSString * title;
@property int urlType;

+ (id)buttonWithTitle:(id)arg1;

- (id)title;
- (void)setTitle:(id)arg1;
- (void)_openURLWithRequest:(id)arg1;
- (id)_accountURLForURL:(id)arg1 authenticationContext:(id)arg2;
- (void)setUrlType:(int)arg1;
- (int)_urlTypeForString:(id)arg1;
- (int)_actionTypeForString:(id)arg1;
- (BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2;
- (void)setParameter:(id)arg1;
- (void)setActionTypeWithString:(id)arg1;
- (void)performDefaultActionForDialog:(id)arg1;
- (void)dealloc;
- (void)setActionType:(int)arg1;
- (int)urlType;
- (id)parameter;
- (int)actionType;
- (void)loadFromDictionary:(id)arg1;

@end
