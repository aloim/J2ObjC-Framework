//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/CloneNotSupportedException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangCloneNotSupportedException")
#ifdef RESTRICT_JavaLangCloneNotSupportedException
#define INCLUDE_ALL_JavaLangCloneNotSupportedException 0
#else
#define INCLUDE_ALL_JavaLangCloneNotSupportedException 1
#endif
#undef RESTRICT_JavaLangCloneNotSupportedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangCloneNotSupportedException_) && (INCLUDE_ALL_JavaLangCloneNotSupportedException || defined(INCLUDE_JavaLangCloneNotSupportedException))
#define JavaLangCloneNotSupportedException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

/*!
 @brief Thrown when a program attempts to clone an object which does not support the
 <code>Cloneable</code> interface.
 - seealso: Cloneable
 */
@interface JavaLangCloneNotSupportedException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>CloneNotSupportedException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>CloneNotSupportedException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangCloneNotSupportedException)

FOUNDATION_EXPORT void JavaLangCloneNotSupportedException_init(JavaLangCloneNotSupportedException *self);

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *new_JavaLangCloneNotSupportedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *create_JavaLangCloneNotSupportedException_init();

FOUNDATION_EXPORT void JavaLangCloneNotSupportedException_initWithNSString_(JavaLangCloneNotSupportedException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *new_JavaLangCloneNotSupportedException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangCloneNotSupportedException *create_JavaLangCloneNotSupportedException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangCloneNotSupportedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangCloneNotSupportedException")