/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSSendParameters : NSObject <NSCopying> {
    NSMutableDictionary *_params;
}

@property(retain) NSString * accountUUID;
@property BOOL activityContinuation;
@property(retain) NSString * alternateCallbackID;
@property(retain) NSArray * bulkedPayload;
@property BOOL bypassDuet;
@property BOOL bypassSizeCheck;
@property BOOL bypassStorage;
@property(retain) NSNumber * command;
@property BOOL compressPayload;
@property BOOL compressed;
@property BOOL daemonDeathResend;
@property(retain) NSData * data;
@property(retain) NSData * dataToEncrypt;
@property(retain) NSDictionary * deliveryStatusContext;
@property(retain) NSArray * destinations;
@property(retain,readonly) NSDictionary * dictionaryRepresentation;
@property(retain) NSArray * duetIdentifiersOverride;
@property BOOL encryptPayload;
@property BOOL enforceRemoteTimeouts;
@property BOOL expectsPeerResponse;
@property(retain,readonly) NSDate * expirationDate;
@property BOOL fireAndForget;
@property(retain) NSString * fromID;
@property(retain) NSString * identifier;
@property(retain) NSArray * interestingRegistrationProperties;
@property BOOL isProxiedOutgoingMessage;
@property BOOL localDelivery;
@property(retain) NSDictionary * message;
@property(retain) NSData * messageUUID;
@property BOOL nonWaking;
@property(retain) NSString * peerResponseIdentifier;
@property int priority;
@property(retain) NSDictionary * protobuf;
@property(retain) NSString * queueOneIdentifier;
@property(retain) NSArray * requireAllRegistrationProperties;
@property BOOL requireBluetooth;
@property(retain) NSDictionary * resourceMetadata;
@property(retain) NSString * resourcePath;
@property double timeout;
@property BOOL useDictAsTopLevel;
@property BOOL wantsAppAck;
@property BOOL wantsDeliveryStatus;
@property BOOL wantsResponse;

- (id)accountUUID;
- (BOOL)activityContinuation;
- (id)alternateCallbackID;
- (id)bulkedPayload;
- (BOOL)bypassDuet;
- (BOOL)bypassSizeCheck;
- (BOOL)bypassStorage;
- (id)command;
- (BOOL)compressPayload;
- (BOOL)compressed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)daemonDeathResend;
- (id)data;
- (id)dataToEncrypt;
- (void)dealloc;
- (id)deliveryStatusContext;
- (id)destinations;
- (id)dictionaryRepresentation;
- (id)duetIdentifiersOverride;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)encryptPayload;
- (BOOL)enforceRemoteTimeouts;
- (BOOL)expectsPeerResponse;
- (id)expirationDate;
- (BOOL)fireAndForget;
- (id)fromID;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestingRegistrationProperties;
- (BOOL)isProxiedOutgoingMessage;
- (BOOL)localDelivery;
- (id)message;
- (id)messageUUID;
- (BOOL)nonWaking;
- (id)objectForKey:(id)arg1;
- (id)peerResponseIdentifier;
- (int)priority;
- (id)protobuf;
- (id)queueOneIdentifier;
- (id)requireAllRegistrationProperties;
- (BOOL)requireBluetooth;
- (id)resourceMetadata;
- (id)resourcePath;
- (void)setAccountUUID:(id)arg1;
- (void)setActivityContinuation:(BOOL)arg1;
- (void)setAlternateCallbackID:(id)arg1;
- (void)setBulkedPayload:(id)arg1;
- (void)setBypassDuet:(BOOL)arg1;
- (void)setBypassSizeCheck:(BOOL)arg1;
- (void)setBypassStorage:(BOOL)arg1;
- (void)setCommand:(id)arg1;
- (void)setCompressPayload:(BOOL)arg1;
- (void)setCompressed:(BOOL)arg1;
- (void)setDaemonDeathResend:(BOOL)arg1;
- (void)setData:(id)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDuetIdentifiersOverride:(id)arg1;
- (void)setEncryptPayload:(BOOL)arg1;
- (void)setEnforceRemoteTimeouts:(BOOL)arg1;
- (void)setExpectsPeerResponse:(BOOL)arg1;
- (void)setFireAndForget:(BOOL)arg1;
- (void)setFromID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterestingRegistrationProperties:(id)arg1;
- (void)setIsProxiedOutgoingMessage:(BOOL)arg1;
- (void)setLocalDelivery:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setNonWaking:(BOOL)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;
- (void)setRequireAllRegistrationProperties:(id)arg1;
- (void)setRequireBluetooth:(BOOL)arg1;
- (void)setResourceMetadata:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseDictAsTopLevel:(BOOL)arg1;
- (void)setWantsAppAck:(BOOL)arg1;
- (void)setWantsDeliveryStatus:(BOOL)arg1;
- (void)setWantsResponse:(BOOL)arg1;
- (double)timeout;
- (BOOL)useDictAsTopLevel;
- (BOOL)wantsAppAck;
- (BOOL)wantsDeliveryStatus;
- (BOOL)wantsResponse;

@end
