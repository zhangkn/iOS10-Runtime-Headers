/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYIncomingBatchSyncSession : SYIncomingFullSyncSession {
    id /* block */  _completion;
    BOOL  _hasReceivedEndSync;
    NSMutableArray * _incomingBatchQueue;
    struct os_lock_handoff_s { 
        struct _os_lock_type_handoff_s {} *osl_type; 
        unsigned long _osl_handoff_opaque[1]; 
    }  _queueLock;
    NSMutableIndexSet * _receivedBatchIndices;
    NSObject<OS_dispatch_source> * _sessionTimer;
    BOOL  canRestart;
    BOOL  canRollback;
}

- (void).cxx_destruct;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleEndSync:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendEndSessionResponse:(id)arg1;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (id)initWithService:(id)arg1;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;

@end