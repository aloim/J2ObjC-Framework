//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/TransformerConfigurationException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformTransformerConfigurationException")
#ifdef RESTRICT_JavaxXmlTransformTransformerConfigurationException
#define INCLUDE_ALL_JavaxXmlTransformTransformerConfigurationException 0
#else
#define INCLUDE_ALL_JavaxXmlTransformTransformerConfigurationException 1
#endif
#undef RESTRICT_JavaxXmlTransformTransformerConfigurationException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformTransformerConfigurationException_) && (INCLUDE_ALL_JavaxXmlTransformTransformerConfigurationException || defined(INCLUDE_JavaxXmlTransformTransformerConfigurationException))
#define JavaxXmlTransformTransformerConfigurationException_

#define RESTRICT_JavaxXmlTransformTransformerException 1
#define INCLUDE_JavaxXmlTransformTransformerException 1
#include "../../../javax/xml/transform/TransformerException.h"

@protocol JavaxXmlTransformSourceLocator;

/*!
 @brief Indicates a serious configuration error.
 */
@interface JavaxXmlTransformTransformerConfigurationException : JavaxXmlTransformTransformerException

#pragma mark Public

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with no
 detail message.
 */
- (instancetype)init;

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with
 the <code>String </code> specified as an error message.
 @param msg The error message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Create a new TransformerConfigurationException from a message and a Locator.
 <p>This constructor is especially useful when an application is
 creating its own exception from within a DocumentHandler
 callback.</p>
 @param message The error or warning message.
 @param locator The locator object for the error or warning.
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Wrap an existing exception in a TransformerConfigurationException.
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param locator The locator object for the error or warning.
 @param e Any exception.
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                 withNSException:(NSException *)e;

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with the
 given <code>Exception</code> base cause and detail message.
 @param e The exception to be encapsulated in a
 TransformerConfigurationException
 @param msg The detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg
                 withNSException:(NSException *)e;

/*!
 @brief Create a new <code>TransformerConfigurationException</code> with a
 given <code>Exception</code> base cause of the error.
 @param e The exception to be encapsulated in a
 TransformerConfigurationException.
 */
- (instancetype)initWithNSException:(NSException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformerConfigurationException)

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_init(JavaxXmlTransformTransformerConfigurationException *self);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *create_JavaxXmlTransformTransformerConfigurationException_init();

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_(JavaxXmlTransformTransformerConfigurationException *self, NSString *msg);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *create_JavaxXmlTransformTransformerConfigurationException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSException_(JavaxXmlTransformTransformerConfigurationException *self, NSException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSException_(NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *create_JavaxXmlTransformTransformerConfigurationException_initWithNSException_(NSException *e);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withNSException_(JavaxXmlTransformTransformerConfigurationException *self, NSString *msg, NSException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withNSException_(NSString *msg, NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *create_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withNSException_(NSString *msg, NSException *e);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(JavaxXmlTransformTransformerConfigurationException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *create_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT void JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(JavaxXmlTransformTransformerConfigurationException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e);

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *new_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformTransformerConfigurationException *create_JavaxXmlTransformTransformerConfigurationException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformerConfigurationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformTransformerConfigurationException")
