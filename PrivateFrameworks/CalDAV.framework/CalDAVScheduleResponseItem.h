/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {
    NSMutableSet *_failedResponseItems;
    NSMutableSet *_responses;
    NSMutableSet *_successfulICS;
}

@property(retain) NSMutableSet * failedResponseItems;
@property(retain) NSMutableSet * responses;
@property(retain) NSMutableSet * successfulICS;

- (void)addNewTopLevelItem:(id)arg1;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)failedResponseItems;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)responses;
- (void)setFailedResponseItems:(id)arg1;
- (void)setResponses:(id)arg1;
- (void)setSuccessfulICS:(id)arg1;
- (id)successfulICS;

@end