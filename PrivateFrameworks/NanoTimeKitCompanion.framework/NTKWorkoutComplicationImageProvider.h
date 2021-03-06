/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorkoutComplicationImageProvider : CLKImageProvider {
    BOOL  _frozen;
    BOOL  _paused;
}

@property (getter=isFrozen, nonatomic) BOOL frozen;
@property (getter=isPaused, nonatomic) BOOL paused;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFrozen;
- (BOOL)isPaused;
- (void)setFrozen:(BOOL)arg1;
- (void)setPaused:(BOOL)arg1;

@end
