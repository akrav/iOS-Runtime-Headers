/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeRange : PBCodable <NSCopying> {
    BOOL _allDay;
    unsigned int _from;
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
        unsigned int allDay : 1; 
    } _has;
    unsigned int _to;
}

@property BOOL allDay;
@property unsigned int from;
@property BOOL hasAllDay;
@property BOOL hasFrom;
@property BOOL hasTo;
@property unsigned int to;

- (BOOL)allDay;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)from;
- (BOOL)hasAllDay;
- (BOOL)hasFrom;
- (BOOL)hasTo;
- (unsigned int)hash;
- (id)initWithPlaceDataTimeRange:(struct { unsigned int x1; unsigned int x2; BOOL x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1;
- (BOOL)isAdjacentToTimeRange:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAllDay:(BOOL)arg1;
- (void)setFrom:(unsigned int)arg1;
- (void)setHasAllDay:(BOOL)arg1;
- (void)setHasFrom:(BOOL)arg1;
- (void)setHasTo:(BOOL)arg1;
- (void)setTo:(unsigned int)arg1;
- (unsigned int)to;
- (void)writeTo:(id)arg1;

@end