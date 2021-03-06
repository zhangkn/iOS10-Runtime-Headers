/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface IDSFaceTimeMessage : FTIDSMessage <NSCopying> {
    NSData * _sessionToken;
}

@property (copy) NSData *sessionToken;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hasRequiredKeys:(id*)arg1;
- (id)init;
- (bool)isValidMessage;
- (id)messageBody;
- (id)requiredKeys;
- (id)sessionToken;
- (void)setSessionToken:(id)arg1;

@end
