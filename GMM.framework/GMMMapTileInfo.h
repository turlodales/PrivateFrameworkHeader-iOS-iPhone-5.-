/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMCopyright;

@interface GMMMapTileInfo : PBCodable  {
    GMMCopyright *_copyright;
}

@property(readonly) BOOL hasCopyright;
@property(retain) GMMCopyright * copyright;


- (BOOL)readFrom:(id)arg1;
- (BOOL)hasCopyright;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (void)setCopyright:(id)arg1;
- (id)copyright;

@end
