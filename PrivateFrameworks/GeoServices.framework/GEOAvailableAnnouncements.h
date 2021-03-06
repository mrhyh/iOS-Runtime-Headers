/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {
    NSMutableArray *_announcements;
    NSString *_languageCode;
}

@property (nonatomic, retain) NSMutableArray *announcements;
@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic, retain) NSString *languageCode;

- (void)addAnnouncement:(id)arg1;
- (id)announcementAtIndex:(unsigned int)arg1;
- (id)announcements;
- (unsigned int)announcementsCount;
- (void)clearAnnouncements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLanguageCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAnnouncements:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
