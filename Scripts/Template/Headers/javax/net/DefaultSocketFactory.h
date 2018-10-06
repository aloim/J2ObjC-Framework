//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/DefaultSocketFactory.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetDefaultSocketFactory")
#ifdef RESTRICT_JavaxNetDefaultSocketFactory
#define INCLUDE_ALL_JavaxNetDefaultSocketFactory 0
#else
#define INCLUDE_ALL_JavaxNetDefaultSocketFactory 1
#endif
#undef RESTRICT_JavaxNetDefaultSocketFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetDefaultSocketFactory_) && (INCLUDE_ALL_JavaxNetDefaultSocketFactory || defined(INCLUDE_JavaxNetDefaultSocketFactory))
#define JavaxNetDefaultSocketFactory_

#define RESTRICT_JavaxNetSocketFactory 1
#define INCLUDE_JavaxNetSocketFactory 1
#include "../../javax/net/SocketFactory.h"

@class JavaNetInetAddress;
@class JavaNetSocket;

/*!
 @brief Default implementation of <code>javax.net.SocketFactory</code>
 */
@interface JavaxNetDefaultSocketFactory : JavaxNetSocketFactory

#pragma mark Public

- (JavaNetSocket *)createSocket;

- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)host
                                              withInt:(jint)port;

- (JavaNetSocket *)createSocketWithJavaNetInetAddress:(JavaNetInetAddress *)address
                                              withInt:(jint)port
                               withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                                              withInt:(jint)localPort;

- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port;

- (JavaNetSocket *)createSocketWithNSString:(NSString *)host
                                    withInt:(jint)port
                     withJavaNetInetAddress:(JavaNetInetAddress *)localHost
                                    withInt:(jint)localPort;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetDefaultSocketFactory)

FOUNDATION_EXPORT void JavaxNetDefaultSocketFactory_init(JavaxNetDefaultSocketFactory *self);

FOUNDATION_EXPORT JavaxNetDefaultSocketFactory *new_JavaxNetDefaultSocketFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetDefaultSocketFactory *create_JavaxNetDefaultSocketFactory_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetDefaultSocketFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetDefaultSocketFactory")