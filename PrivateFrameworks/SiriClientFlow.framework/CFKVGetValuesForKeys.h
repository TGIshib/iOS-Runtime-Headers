/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFKVGetValuesForKeys : SADomainCommand <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *keys;
@property (nonatomic, copy) NSString *storeType;
@property (readonly) Class superclass;

+ (id)getValuesForKeys;
+ (id)getValuesForKeysWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)keys;
- (BOOL)requiresResponse;
- (void)setKeys:(id)arg1;
- (void)setStoreType:(id)arg1;
- (id)storeType;

@end
