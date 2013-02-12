/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying> {
    BOOL m_explicit;
    NSMutableArray *m_list;
    NSString *m_name;
}

@property BOOL explicit; /* unknown property attribute: Vm_explicit */
@property(readonly) NSArray *list; /* unknown property attribute: Vm_list */
@property(copy) NSString *name; /* unknown property attribute: Vm_name */
@property(readonly) NSArray *names;
@property(readonly) NSUInteger count;

- (id)arrayValueForName:(id)arg1;
- (BOOL)boolValueForName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)explicit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)list;
- (void)mergeAttributes:(id)arg1;
- (id)name;
- (id)names;
- (void)setAttribute:(id)arg1;
- (void)setBoolValueForName:(BOOL)arg1 forName:(id)arg2;
- (void)setExplicit:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
- (id)stringValueForName:(id)arg1;
- (id)valueForName:(id)arg1;

@end