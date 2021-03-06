/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSWriter : NSObject <BRCModule> {
    BOOL  _isCancelled;
    NSObject<OS_dispatch_queue> * _serialQueue;
    BRCAccountSession * _session;
    int  _suspendCount;
    brc_task_tracker * _taskTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;

+ (BOOL)_isPathMatchIdle:(const struct { id x1; id x2; unsigned long long x3; }*)arg1;

- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (id)_generateGentleBounceForPathMatch:(const struct { id x1; id x2; unsigned long long x3; }*)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned int*)arg3;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(BOOL*)arg6;
- (id)bouncePath:(id)arg1 toPreservePathMatch:(id)arg2;
- (BOOL)bouncePathMatch:(const struct { id x1; id x2; unsigned long long x3; }*)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (void)cancel;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isCancelled;
- (void)resume;
- (id)serialQueue;
- (id)session;
- (void)suspend;
- (id)taskTracker;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3;

@end
