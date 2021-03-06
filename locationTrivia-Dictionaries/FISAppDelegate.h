//  FISAppDelegate.h

#import <UIKit/UIKit.h>

@interface FISAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

/**
 
 *  Declare your method names here.
 
 */

- (NSString *)stringByTruncatingNameOfLocation:(NSDictionary *)location toLength:(NSUInteger)length;

- (NSDictionary *)dictionaryForLocationWithName:(NSString *)name
                                       latitude:(CGFloat)latitude
                                      longitude:(CGFloat)longitude;

- (NSArray *)namesOfLocations:(NSArray *)locations;

- (BOOL)dictionaryIsValidLocation:(NSDictionary *)location;


- (NSDictionary *)locationNamed:(NSString *)name inLocations:(NSArray *)locations;

@end
