/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent> {
    struct FramebufferAttributes { 
        int type; 
        int samples; 
        int colorDataType; 
        int colorFormat; 
        int depthDataType; 
        BOOL linearFilter; 
        BOOL discardHint; 
    } mAttributes;
    BOOL mMultisampleDisabled;
    TSCH3DGLFBO *mMultisampleFBO;
    <TSCH3DGLResolveFramebuffer> *mParent;
    BOOL mResolved;
}

@property (nonatomic, readonly) struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; } attributes;
@property (nonatomic, readonly) BOOL resolved;
@property (nonatomic, readonly) BOOL usingMultisample;

+ (id)multisampleWithParent:(id)arg1 framebufferAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg2;

- (id).cxx_construct;
- (BOOL)activateInsideSession:(id)arg1;
- (struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; })attributes;
- (BOOL)bindInSession:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (void)disableSamplingInSession:(id)arg1;
- (id)initWithParent:(id)arg1 framebufferAttributes:(const struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; }*)arg2;
- (id)multisampleFBOResource;
- (struct FramebufferAttributes { int x1; int x2; int x3; int x4; int x5; BOOL x6; BOOL x7; })p_clampedAttributes;
- (BOOL)p_createMultisampleFBOOnDemandInsideSession:(id)arg1 returningResolveFramebufferActivated:(BOOL*)arg2;
- (struct SessionLoadResourceResult { BOOL x1; BOOL x2; BOOL x3; id x4; })p_loadFramebufferInSession:(id)arg1;
- (BOOL)p_supportsMultisample;
- (void)resolveInSession:(id)arg1;
- (BOOL)resolved;
- (BOOL)usingMultisample;
- (BOOL)validForSession:(id)arg1;

@end
