#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ChatProvidersSDK/ChatProvidersSDK.h>

@interface ZDKJWTAuth: NSObject<ZDKJWTAuthenticator>

{
    NSString *token;
}

- (void)setToken:(NSString *_Nullable) tokenString;
- (void)getToken:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;

@end
