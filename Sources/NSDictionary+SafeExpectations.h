#import <Foundation/Foundation.h>

/**
 Additions to NSDictionary
 */
@interface NSDictionary (SafeExpectations)

/**
 Returns a NSString value for the specified key.
 
 @param key The key for which to return the corresponding value
 @returns the resulting string. If the result is not a NSString and can't converted to one, it returns nil
 */
- (NSString *)stringForKey:(id)key;

/**
 Returns a NSNumber value for the specified key.
 
 @param key The key for which to return the corresponding value
 @note this method by default uses a number formatter based on the en_US_POSIX locale, if the number does not follow that format it will return nil
 @returns the resulting number. If the result is not a NSNumber and can't converted to one, it returns nil
 */
- (NSNumber *)numberForKey:(id)key;

/**
 Returns a NSArray value for the specified key.
 
 @param key The key for which to return the corresponding value
 @returns the resulting array. If the result is not a NSArray, it returns nil
 */
- (NSArray *)arrayForKey:(id)key;

/**
 Returns a NSDictionary value for the specified key. 
 
 @param key The key for which to return the corresponding value
 @returns the resulting dictionary. If the result is not a NSDictionary, it returns nil
 */
- (NSDictionary *)dictionaryForKey:(id)key;

/**
 Returns an object for the specified keyPath

 @param keyPath A key path of the form relationship.property (with one or more relationships); for example “department.name” or “department.manager.lastName”
 @returns The value for the derived property identified by keyPath. If the keyPath is not valid, it returns nil
 */
- (id)objectForKeyPath:(NSString *)keyPath;

/**
 Returns an object for the specified keyPath

 @param keyPath A key path of the form relationship.property, see objectForKeyPath:
 @returns The value for the derived property identified by keyPath. If the keyPath is not valid or the result is not a NSString or can't be converted to one, it returns nil
 */
- (NSString *)stringForKeyPath:(id)keyPath;

/**
 Returns an object for the specified keyPath
 @note this method by default uses a number formatter based on the en_US_POSIX locale, if the number does not follow that format it will return nil
 @param keyPath A key path of the form relationship.property, see objectForKeyPath:
 @returns The value for the derived property identified by keyPath. If the keyPath is not valid or the result is not a NSNumber or can't be converted to one, it returns nil
 */
- (NSNumber *)numberForKeyPath:(id)keyPath;

/**
 Returns an object for the specified keyPath

 @param keyPath A key path of the form relationship.property, see objectForKeyPath:
 @returns The value for the derived property identified by keyPath. If the keyPath is not valid or the result is not a NSArray, it returns nil
 */
- (NSArray *)arrayForKeyPath:(id)keyPath;

/**
 Returns an object for the specified keyPath

 @param keyPath A key path of the form relationship.property, see objectForKeyPath:
 @returns The value for the derived property identified by keyPath. If the keyPath is not valid or the result is not a NSDictionary, it returns nil
 */
- (NSDictionary *)dictionaryForKeyPath:(id)keyPath;


@end
