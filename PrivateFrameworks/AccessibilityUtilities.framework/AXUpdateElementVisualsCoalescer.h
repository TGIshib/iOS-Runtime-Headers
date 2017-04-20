/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXUpdateElementVisualsCoalescer : NSObject {
    double  _lastProgressTime;
    double  _progressInterval;
    double  _threshold;
    NSTimer * _timer;
    id /* block */  _updateVisualsSequenceDidBeginHandler;
    id /* block */  _updateVisualsSequenceDidFinishHandler;
    id /* block */  _updateVisualsSequenceInProgressHandler;
}

@property (nonatomic) double lastProgressTime;
@property (nonatomic) double progressInterval;
@property (nonatomic) double threshold;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, copy) id /* block */ updateVisualsSequenceDidBeginHandler;
@property (nonatomic, copy) id /* block */ updateVisualsSequenceDidFinishHandler;
@property (nonatomic, copy) id /* block */ updateVisualsSequenceInProgressHandler;

- (void)_timerDidFire:(id)arg1;
- (void)dealloc;
- (id)init;
- (double)lastProgressTime;
- (void)notifyUpdateElementVisualsEventDidOccur;
- (double)progressInterval;
- (void)setLastProgressTime:(double)arg1;
- (void)setProgressInterval:(double)arg1;
- (void)setThreshold:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)setUpdateVisualsSequenceDidBeginHandler:(id /* block */)arg1;
- (void)setUpdateVisualsSequenceDidFinishHandler:(id /* block */)arg1;
- (void)setUpdateVisualsSequenceInProgressHandler:(id /* block */)arg1;
- (double)threshold;
- (id)timer;
- (id /* block */)updateVisualsSequenceDidBeginHandler;
- (id /* block */)updateVisualsSequenceDidFinishHandler;
- (id /* block */)updateVisualsSequenceInProgressHandler;

@end