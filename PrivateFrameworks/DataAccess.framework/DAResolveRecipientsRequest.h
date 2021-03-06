/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAResolveRecipientsRequest : NSObject {
    NSArray *_emailAddresses;
    NSDate *_endTime;
    BOOL _retrieveAvailablilty;
    BOOL _retrieveCertificates;
    NSDate *_startTime;
}

@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic) BOOL retrieveAvailablilty;
@property (nonatomic) BOOL retrieveCertificates;
@property (nonatomic, retain) NSDate *startTime;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddresses;
- (id)endTime;
- (unsigned int)hash;
- (id)initWithEmailAddresses:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 retrieveCertificates:(BOOL)arg2 retrieveAvailability:(BOOL)arg3 withStartTime:(id)arg4 endTime:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)retrieveAvailablilty;
- (BOOL)retrieveCertificates;
- (void)setEmailAddresses:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setRetrieveAvailablilty:(BOOL)arg1;
- (void)setRetrieveCertificates:(BOOL)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
