/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOLocationResponse : PBCodable  {
    int _status;
    NSMutableArray *_locations;
}

@property int status;
@property(retain) NSMutableArray * locations;


- (void)setStatus:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (void)addLocation:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)dictionaryRepresentation;
- (int)status;
- (id)locations;
- (id)description;
- (void)dealloc;
- (id)initWithGMMWaypointFeedback:(id)arg1;

@end
