/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskServer : NSObject <CATTaskSessionDelegate> {
    <CATTaskServerDelegate> *_delegate;
    NSDictionary *_userInfo;
    NSMutableDictionary *mActiveSessionsByUUID;
    NSObject<OS_dispatch_group> *mAllSessionsDidInvalidateGroup;
    NSMutableDictionary *mConnectedSessionsByUUID;
    CATStateMachine *mFSM;
    NSMutableDictionary *mInvalidatingSessionsByUUID;
    CATOperationQueue *mOrphanedOperationQueue;
    NSMutableSet *mSessions;
    CATTaskServer *mStrongSelf;
}

@property (nonatomic, readonly, copy) NSArray *clientSessions;
@property (nonatomic, readonly, copy) NSArray *connectedClientSessions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATTaskServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)allSessionsDidInvalidate;
- (id)clientSessions;
- (void)connectWithClientTransport:(id)arg1;
- (id)connectedClientSessions;
- (void)dealloc;
- (id)delegate;
- (void)delegateClientSession:(id)arg1 didInterruptWithError:(id)arg2;
- (void)delegateClientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (BOOL)delegateClientSession:(id)arg1 shouldConnectWithTransport:(id)arg2;
- (void)delegateClientSessionDidConnect:(id)arg1;
- (void)delegateClientSessionDidDisconnect:(id)arg1;
- (void)delegateDidInvalidate;
- (void)delegateDidInvalidateAndFinalize;
- (void)delegateSessionDidInvalidate:(id)arg1;
- (void)disconnectAllClientSessions;
- (id)init;
- (void)invalidate;
- (void)invalidateAllClientSessions;
- (void)invalidateWithError:(id)arg1;
- (void)makeSessionWithClientTransport:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)session:(id)arg1 didInterruptWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)session:(id)arg1 enqueueOperation:(id)arg2;
- (id)session:(id)arg1 enqueueOperationForRequest:(id)arg2 error:(id*)arg3;
- (BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidInvalidate:(id)arg1;
- (void)sessionWillInvalidate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)startInvalidatingWithError:(id)arg1;
- (id)userInfo;

@end