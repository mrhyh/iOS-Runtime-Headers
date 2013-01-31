/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTurnBasedParticipantInternal, NSString, NSDate;

@interface GKTurnBasedParticipant : NSObject  {
    GKTurnBasedParticipantInternal *_internal;
}

@property(retain) NSString * playerID;
@property(retain) NSDate * lastTurnDate;
@property(retain) NSDate * timeoutDate;
@property int status;
@property int matchOutcome;
@property(readonly) NSString * matchStatusString;
@property(readonly) NSString * matchOutcomeString;
@property(readonly) BOOL isWinner;
@property(retain) NSString * invitedBy;
@property(readonly) NSString * inviteMessage;
@property(retain) GKTurnBasedParticipantInternal * internal;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)matchOutcomeIsValidForDoneState:(int)arg1;

- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (BOOL)isWinner;
- (id)matchOutcomeString;
- (id)matchStatusString;
- (id)basicMatchOutcomeString;
- (id)lastTurnDate;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)internal;

@end