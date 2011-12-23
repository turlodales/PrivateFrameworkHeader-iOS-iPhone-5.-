/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableData, NSString, NSData, NSURLConnection;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_token;
    double _timeTokenGranted;
    int _phase;
    NSData *_r1;
    NSData *_r1Hash;
    NSData *_r2;
    NSData *_hmac;
}

+ (id)sharedAuthenticator;

- (void)invalidateToken;
- (void)_copyCertificateData:(id*)arg1 privateKey:(struct __SecKey {}**)arg2;
- (void)_loadStatusChanged;
- (void)_clearNonces;
- (BOOL)_authenticate1;
- (BOOL)canAuthenticate;
- (void)authenticate;
- (void)_connectionDidEnd;
- (BOOL)_authenticate2;
- (void)_succeeded;
- (BOOL)isAuthenticating;
- (void)_failWithErrorCode:(int)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)token;

@end