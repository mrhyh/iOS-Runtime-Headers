/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalActionFilter : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _componentTypes;
}

@property (nonatomic, readonly) int*componentTypes;
@property (nonatomic, readonly) unsigned int componentTypesCount;

- (void)addComponentType:(int)arg1;
- (void)clearComponentTypes;
- (int)componentTypeAtIndex:(unsigned int)arg1;
- (int*)componentTypes;
- (unsigned int)componentTypesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setComponentTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end