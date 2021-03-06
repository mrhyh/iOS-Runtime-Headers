/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLStatistics : NSObject {
    NSString *_contentType;
    unsigned long long _downloadByteCount;
    NSDate *_downloadEndDate;
    NSDate *_downloadStartDate;
    unsigned long long _importEndBytesFree;
    NSDate *_importEndDate;
    unsigned int _importFailedRecordCount;
    unsigned int _importRecordCount;
    unsigned long long _importStartBytesFree;
    NSDate *_importStartDate;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic) unsigned long long downloadByteCount;
@property (nonatomic, retain) NSDate *downloadEndDate;
@property (nonatomic, retain) NSDate *downloadStartDate;
@property (nonatomic) unsigned long long importEndBytesFree;
@property (nonatomic, retain) NSDate *importEndDate;
@property (nonatomic) unsigned int importFailedRecordCount;
@property (nonatomic) unsigned int importRecordCount;
@property (nonatomic) unsigned long long importStartBytesFree;
@property (nonatomic, retain) NSDate *importStartDate;

+ (id)aggregateContentType;
+ (id)fetchContentType;
+ (id)statisticsWithContentType:(id)arg1;

- (void).cxx_destruct;
- (void)addToFetchByteCount:(unsigned long long)arg1;
- (id)contentType;
- (id)description;
- (unsigned long long)downloadByteCount;
- (unsigned long long)downloadBytesPerSecond;
- (unsigned int)downloadDuration;
- (id)downloadEndDate;
- (id)downloadStartDate;
- (id)fetchLogString;
- (long long)importBytesUsed;
- (unsigned int)importDuration;
- (unsigned long long)importEndBytesFree;
- (id)importEndDate;
- (unsigned int)importFailedRecordCount;
- (unsigned int)importRecordCount;
- (unsigned long long)importStartBytesFree;
- (id)importStartDate;
- (void)incrementFetchFailedRequestCount;
- (void)incrementFetchRequestCount;
- (void)setDownloadByteCount:(unsigned long long)arg1;
- (void)setDownloadEndDate:(id)arg1;
- (void)setDownloadStartDate:(id)arg1;
- (void)setFetchEndBytesFree:(unsigned long long)arg1;
- (void)setFetchEndDate:(id)arg1;
- (void)setFetchStartBytesFree:(unsigned long long)arg1;
- (void)setFetchStartDate:(id)arg1;
- (void)setImportEndBytesFree:(unsigned long long)arg1;
- (void)setImportEndDate:(id)arg1;
- (void)setImportFailedRecordCount:(unsigned int)arg1;
- (void)setImportRecordCount:(unsigned int)arg1;
- (void)setImportStartBytesFree:(unsigned long long)arg1;
- (void)setImportStartDate:(id)arg1;

@end
