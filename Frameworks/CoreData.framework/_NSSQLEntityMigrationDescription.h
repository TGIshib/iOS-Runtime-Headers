/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityMapping, NSMutableArray, NSMutableDictionary, NSSQLEntity;

@interface _NSSQLEntityMigrationDescription : NSObject {
    NSMutableArray *_addedManyToManys;
    NSSQLEntity *_dstEntity;
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_joinedEntitiesByForeignKeyColumn;
    NSMutableDictionary *_mappingsByName;
    NSInteger _migrationType;
    NSMutableArray *_pendingTransforms;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_removedManyToManys;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSSQLEntity *_srcEntity;
    NSMutableArray *_transformedManyToManys;
}

@property(readonly) NSInteger migrationType; /* unknown property attribute: V_migrationType */
@property(readonly) NSEntityMapping *entityMapping; /* unknown property attribute: V_entityMapping */
@property(readonly) NSSQLEntity *destinationEntity; /* unknown property attribute: V_dstEntity */
@property(readonly) NSSQLEntity *sourceEntity; /* unknown property attribute: V_srcEntity */

- (void)_configureJoinWithEntity:(id)arg1 foreignKeyColumn:(id)arg2;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_newJoinTableAliasForEntity:(id)arg1 foreignKeyColumn:(id)arg2;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_populateSQLValuesForSourceToOne:(id)arg1 foreignKeyColumn:(id)arg2 entityKeyColumn:(id)arg3;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)addedManyToManys;
- (void)dealloc;
- (id)destinationEntity;
- (id)entityMapping;
- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (id)joinEntitiesByForeignKeyColumn;
- (id)mappingsByName;
- (NSInteger)migrationType;
- (id)nextPropertyTransform;
- (id)removedManyToManys;
- (id)sourceEntity;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)transformedManyToManys;

@end