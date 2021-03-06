/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class <UIFoundationGlobalUserDefaultsHelper>, NSMutableDictionary;

@interface _UIGlobalUserDefaults : NSUserDefaults {
    unsigned int _backgroundTaskIdentifier;
    NSMutableDictionary *_userDefaultsDictionary;
    <UIFoundationGlobalUserDefaultsHelper> *_userDefaultsHelper;
}

@property unsigned int backgroundTaskIdentifier;
@property(retain) NSMutableDictionary * userDefaultsDictionary;
@property(retain) <UIFoundationGlobalUserDefaultsHelper> * userDefaultsHelper;

- (void)_scheduleSynchronization;
- (void)_synchronizeIfNeeded;
- (id)_userDefaultsHelperCreateIfNeeded;
- (unsigned int)backgroundTaskIdentifier;
- (void)dealloc;
- (id)init;
- (void)loadDefaultsDictionary;
- (void)loadDefaultsDictionaryIfNeeded;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBackgroundTaskIdentifier:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setUserDefaultsDictionary:(id)arg1;
- (void)setUserDefaultsHelper:(id)arg1;
- (BOOL)synchronize;
- (id)userDefaultsDictionary;
- (id)userDefaultsHelper;

@end
