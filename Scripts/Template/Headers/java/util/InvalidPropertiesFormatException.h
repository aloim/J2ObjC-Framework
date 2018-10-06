//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/InvalidPropertiesFormatException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException")
#ifdef RESTRICT_JavaUtilInvalidPropertiesFormatException
#define INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException 0
#else
#define INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException 1
#endif
#undef RESTRICT_JavaUtilInvalidPropertiesFormatException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilInvalidPropertiesFormatException_) && (INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException || defined(INCLUDE_JavaUtilInvalidPropertiesFormatException))
#define JavaUtilInvalidPropertiesFormatException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../java/io/IOException.h"

/*!
 @brief An <code>InvalidPropertiesFormatException</code> is thrown if loading the XML
 document defining the properties does not follow the <code>Properties</code>
 specification.
 Even though this Exception inherits the <code>Serializable</code> interface, it is not
 serializable. The methods used for serialization throw
 <code>NotSerializableException</code>s.
 */
@interface JavaUtilInvalidPropertiesFormatException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a new <code>InvalidPropertiesFormatException</code> with the
 current stack trace and message filled in.
 @param m
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)m;

/*!
 @brief Constructs a new <code>InvalidPropertiesFormatException</code> with the cause
 for the Exception.
 @param c
 the cause for the Exception.
 */
- (instancetype)initWithNSException:(NSException *)c;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilInvalidPropertiesFormatException)

FOUNDATION_EXPORT void JavaUtilInvalidPropertiesFormatException_initWithNSString_(JavaUtilInvalidPropertiesFormatException *self, NSString *m);

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *new_JavaUtilInvalidPropertiesFormatException_initWithNSString_(NSString *m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *create_JavaUtilInvalidPropertiesFormatException_initWithNSString_(NSString *m);

FOUNDATION_EXPORT void JavaUtilInvalidPropertiesFormatException_initWithNSException_(JavaUtilInvalidPropertiesFormatException *self, NSException *c);

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *new_JavaUtilInvalidPropertiesFormatException_initWithNSException_(NSException *c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilInvalidPropertiesFormatException *create_JavaUtilInvalidPropertiesFormatException_initWithNSException_(NSException *c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilInvalidPropertiesFormatException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilInvalidPropertiesFormatException")