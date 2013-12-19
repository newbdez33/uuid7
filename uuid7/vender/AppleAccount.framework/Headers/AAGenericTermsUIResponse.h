/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSData, NSDictionary, NSString;

@interface AAGenericTermsUIResponse : AAResponse {
    NSString *_responseAgreeURL;
    NSData *_responseData;
    NSDictionary *_responseTermsDictionary;
}

@property(readonly) NSString * agreeURL;
@property(readonly) NSData * responseData;
@property(readonly) NSDictionary * termsDictionary;

- (void).cxx_destruct;
- (id)agreeURL;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseData;
- (id)termsDictionary;

@end
