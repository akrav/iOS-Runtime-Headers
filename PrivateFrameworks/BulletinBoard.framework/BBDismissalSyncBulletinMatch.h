/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBDismissalItem, NSString;

@interface BBDismissalSyncBulletinMatch : NSObject {
    NSString *_dismissalID;
    BBDismissalItem *_dismissalItem;
    unsigned int _feeds;
    NSString *_sectionID;
}

@property(copy) NSString * dismissalID;
@property(retain) BBDismissalItem * dismissalItem;
@property unsigned int feeds;
@property(copy) NSString * sectionID;

- (void)dealloc;
- (id)description;
- (id)dismissalID;
- (id)dismissalItem;
- (unsigned int)feeds;
- (id)initWithDismissalDictionaryItem:(id)arg1;
- (id)initWithDismissalID:(id)arg1 andItem:(id)arg2;
- (id)sectionID;
- (void)setDismissalID:(id)arg1;
- (void)setDismissalItem:(id)arg1;
- (void)setFeeds:(unsigned int)arg1;
- (void)setSectionID:(id)arg1;

@end
