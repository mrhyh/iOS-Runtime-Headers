/* Generated by RuntimeBrowser.
 */

@protocol AASetupAssistantDelegateService

@required

- (NSDictionary *)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (NSString *)delegateServiceIdentifier;

@optional

- (BOOL)canAutoSetupMailAccount:(NSString *)arg1;
- (void)completeEnablingCloudServicesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (BOOL)needSetupForMailAccount:(NSString *)arg1;
- (void)setBackupEnabled:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)setCloudServicesEnabled:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)setDeviceLocatorEnabled:(BOOL)arg1;
- (void)setupMailAccount:(void *)arg1 password:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)setupOperationFailed;
- (void)verifyAccountWithAppleID:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end
