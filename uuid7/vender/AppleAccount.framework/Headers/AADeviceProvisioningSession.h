/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString;

@interface AADeviceProvisioningSession : NSObject {
    NSString *_dsid;
}

- (void).cxx_destruct;
- (id)deviceProvisioningInfo;
- (long)eraseProvisioning;
- (id)initWithAccount:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (long)provisionDeviceWithData:(id)arg1;
- (long)synchronizeProvisioningWithData:(id)arg1;

@end
