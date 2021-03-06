/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSProgressPublisher>;

@interface _NSProgressProxy : NSProgress {
    <NSProgressPublisher> *_forwarder;
    BOOL _isOld;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _unpublishingHandler;

}

- (void)_acknowledgeWithSuccess:(BOOL)arg1;
- (id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3;
- (void)_invokePublishingHandler:(id)arg1;
- (void)_invokeUnpublishingHandler;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)cancel;
- (void)dealloc;
- (BOOL)isOld;
- (void)pause;
- (void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)setCancellable:(BOOL)arg1;
- (void)setCancellationHandler:(id)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(BOOL)arg1;
- (void)setPausingHandler:(id)arg1;
- (void)setPrioritizable:(BOOL)arg1;
- (void)setPrioritizationHandler:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)unpublish;

@end
