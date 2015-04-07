/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKDMarkNotificationsReadOperation : CKDOperation {
    NSMutableDictionary *_errorByNotificationID;
    NSArray *_notificationIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _notificationMarkedRead;

    NSMutableSet *_successfulNotificationIDs;
}

@property(retain) NSMutableDictionary * errorByNotificationID;
@property(retain) NSArray * notificationIDs;
@property(copy) id notificationMarkedRead;
@property(retain) NSMutableSet * successfulNotificationIDs;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleNotificationID:(id)arg1 withResponse:(id)arg2;
- (id)errorByNotificationID;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id)notificationIDs;
- (id)notificationMarkedRead;
- (void)setErrorByNotificationID:(id)arg1;
- (void)setNotificationIDs:(id)arg1;
- (void)setNotificationMarkedRead:(id)arg1;
- (void)setSuccessfulNotificationIDs:(id)arg1;
- (id)successfulNotificationIDs;

@end