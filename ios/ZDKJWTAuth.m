#import "ZDKJWTAuth.h"

@implementation ZDKJWTAuth

-(void)setToken:(NSString *)tokenString{
    token = tokenString;
}

- (void)getToken:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion {
    completion(token, NULL);
}

@end
