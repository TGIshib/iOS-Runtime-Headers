/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMDateTime, GMMDirectionsIconRequest, GMMMapInfo, NSMutableArray;

@interface GMMDirectionsRequest : GMMRequest <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    BOOL _addStepNoticesToInstructionText;
    BOOL _hasAddStepNoticesToInstructionText;
    BOOL _hasIncludeStreetViewPanoId;
    BOOL _hasRequestedResultType;
    BOOL _hasRequestedTimeType;
    BOOL _hasResultPageOffset;
    BOOL _hasTripMaxCount;
    GMMDirectionsIconRequest *_iconRequest;
    BOOL _includeStreetViewPanoId;
    GMMMapInfo *_mapViewport;
    NSMutableArray *_modes;
    NSMutableArray *_options;
    GMMDateTime *_requestedDateTime;
    NSInteger _requestedResultType;
    NSInteger _requestedTimeType;
    NSInteger _resultPageOffset;
    NSInteger _tripMaxCount;
    NSMutableArray *_waypoints;
}

@property BOOL hasAddStepNoticesToInstructionText; /* unknown property attribute: V_hasAddStepNoticesToInstructionText */
@property BOOL addStepNoticesToInstructionText; /* unknown property attribute: V_addStepNoticesToInstructionText */
@property BOOL hasIncludeStreetViewPanoId; /* unknown property attribute: V_hasIncludeStreetViewPanoId */
@property BOOL includeStreetViewPanoId; /* unknown property attribute: V_includeStreetViewPanoId */
@property(retain) NSMutableArray *options; /* unknown property attribute: V_options */
@property(retain) GMMMapInfo *mapViewport; /* unknown property attribute: V_mapViewport */
@property BOOL hasResultPageOffset; /* unknown property attribute: V_hasResultPageOffset */
@property NSInteger resultPageOffset; /* unknown property attribute: V_resultPageOffset */
@property BOOL hasRequestedResultType; /* unknown property attribute: V_hasRequestedResultType */
@property NSInteger requestedResultType; /* unknown property attribute: V_requestedResultType */
@property(retain) GMMDirectionsIconRequest *iconRequest; /* unknown property attribute: V_iconRequest */
@property BOOL hasTripMaxCount; /* unknown property attribute: V_hasTripMaxCount */
@property NSInteger tripMaxCount; /* unknown property attribute: V_tripMaxCount */
@property BOOL hasRequestedTimeType; /* unknown property attribute: V_hasRequestedTimeType */
@property NSInteger requestedTimeType; /* unknown property attribute: V_requestedTimeType */
@property(retain) GMMDateTime *requestedDateTime; /* unknown property attribute: V_requestedDateTime */
@property(retain) NSMutableArray *waypoints; /* unknown property attribute: V_waypoints */
@property(retain) NSMutableArray *modes; /* unknown property attribute: V_modes */
@property(readonly) BOOL hasIconRequest;
@property(readonly) BOOL hasMapViewport;
@property(readonly) BOOL hasRequestedDateTime;
@property(readonly) NSInteger modesCount;
@property(readonly) NSInteger optionsCount;
@property(readonly) NSInteger waypointsCount;

- (void)_writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (void)addMode:(NSInteger)arg1;
- (void)addOptions:(id)arg1;
- (BOOL)addStepNoticesToInstructionText;
- (void)addWaypoint:(id)arg1;
- (void)dealloc;
- (BOOL)hasAddStepNoticesToInstructionText;
- (BOOL)hasIconRequest;
- (BOOL)hasIncludeStreetViewPanoId;
- (BOOL)hasMapViewport;
- (BOOL)hasRequestedDateTime;
- (BOOL)hasRequestedResultType;
- (BOOL)hasRequestedTimeType;
- (BOOL)hasResultPageOffset;
- (BOOL)hasTripMaxCount;
- (id)iconRequest;
- (BOOL)includeStreetViewPanoId;
- (id)init;
- (id)mapViewport;
- (NSInteger)modeAtIndex:(NSUInteger)arg1;
- (id)modes;
- (NSInteger)modesCount;
- (id)options;
- (id)optionsAtIndex:(NSUInteger)arg1;
- (NSInteger)optionsCount;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (id)requestedDateTime;
- (NSInteger)requestedResultType;
- (NSInteger)requestedTimeType;
- (Class)responseClass;
- (NSInteger)resultPageOffset;
- (void)setAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)setHasAddStepNoticesToInstructionText:(BOOL)arg1;
- (void)setHasIncludeStreetViewPanoId:(BOOL)arg1;
- (void)setHasRequestedResultType:(BOOL)arg1;
- (void)setHasRequestedTimeType:(BOOL)arg1;
- (void)setHasResultPageOffset:(BOOL)arg1;
- (void)setHasTripMaxCount:(BOOL)arg1;
- (void)setIconRequest:(id)arg1;
- (void)setIncludeStreetViewPanoId:(BOOL)arg1;
- (void)setMapViewport:(id)arg1;
- (void)setMode:(NSInteger)arg1 atIndex:(NSInteger)arg2;
- (void)setModes:(id)arg1;
- (void)setOptions:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setOptions:(id)arg1;
- (void)setRequestedDateTime:(id)arg1;
- (void)setRequestedResultType:(NSInteger)arg1;
- (void)setRequestedTimeType:(NSInteger)arg1;
- (void)setResultPageOffset:(NSInteger)arg1;
- (void)setTripMaxCount:(NSInteger)arg1;
- (void)setWaypoint:(id)arg1 atIndex:(NSInteger)arg2;
- (void)setWaypoints:(id)arg1;
- (NSInteger)tripMaxCount;
- (id)waypointAtIndex:(NSUInteger)arg1;
- (id)waypoints;
- (NSInteger)waypointsCount;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end