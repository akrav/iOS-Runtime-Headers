/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSCache, NSObject<OS_dispatch_queue>, PHPhotoLibrary;

@interface PHBatchFetchingArray : NSArray {
    unsigned int _batchSize;
    NSCache *_cache;
    unsigned int _count;
    NSArray *_firstBatch;
    unsigned int _firstBatchIndex;
    NSObject<OS_dispatch_queue> *_firstBatchQueue;
    NSArray *_oids;
    PHPhotoLibrary *_photoLibrary;
    unsigned int _propertyHint;
}

@property(readonly) NSArray * oids;
@property(readonly) PHPhotoLibrary * photoLibrary;

+ (BOOL)accessInstanceVariablesDirectly;

- (void).cxx_destruct;
- (id)__batchHelper:(unsigned int)arg1;
- (id)_phObjectAtIndex:(unsigned int)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned int)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (void)min:(id*)arg1 andMax:(id*)arg2 forKeypath:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)oids;
- (id)photoLibrary;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end