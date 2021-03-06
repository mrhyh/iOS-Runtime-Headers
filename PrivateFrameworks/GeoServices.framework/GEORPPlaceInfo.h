/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPlaceInfo : PBCodable <NSCopying> {
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
}

@property (nonatomic, readonly) BOOL hasPlaceRequest;
@property (nonatomic, readonly) BOOL hasPlaceResponse;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *placeResponse;

- (void)clearSessionIdFromPlaceRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceRequest;
- (BOOL)hasPlaceResponse;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequest;
- (id)placeResponse;
- (BOOL)readFrom:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)writeTo:(id)arg1;

@end
