//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLTransientConnectionException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLTransientConnectionException")
#ifdef RESTRICT_JavaSqlSQLTransientConnectionException
#define INCLUDE_ALL_JavaSqlSQLTransientConnectionException 0
#else
#define INCLUDE_ALL_JavaSqlSQLTransientConnectionException 1
#endif
#undef RESTRICT_JavaSqlSQLTransientConnectionException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLTransientConnectionException_) && (INCLUDE_ALL_JavaSqlSQLTransientConnectionException || defined(INCLUDE_JavaSqlSQLTransientConnectionException))
#define JavaSqlSQLTransientConnectionException_

#define RESTRICT_JavaSqlSQLTransientException 1
#define INCLUDE_JavaSqlSQLTransientException 1
#include "../../java/sql/SQLTransientException.h"

@interface JavaSqlSQLTransientConnectionException : JavaSqlSQLTransientException

#pragma mark Public

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to null, the SQLState string is set to null and the Error Code is set
 to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the given reason string, the SQLState string is set to null and
 the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the given reason string, the SQLState string is set to the given
 SQLState string and the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the given reason string, the SQLState string is set to the given
 SQLState string and the Error Code is set to the given error code value.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the given reason string, the SQLState string is set to the given
 SQLState string , the Error Code is set to the given error code value,
 and the cause Throwable object is set to the given cause Throwable
 object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the given reason string, the SQLState string is set to the given
 SQLState string and the cause Throwable object is set to the given cause
 Throwable object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the given and the cause Throwable object is set to the given cause
 Throwable object.
 @param reason
 the string to use as the Reason string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLTransientConnectionException object.
 The Reason string is
 set to the null if cause == null or cause.toString() if cause!=null,and
 the cause Throwable object is set to the given cause Throwable object.
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSException:(NSException *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLTransientConnectionException)

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_init(JavaSqlSQLTransientConnectionException *self);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_init();

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_(JavaSqlSQLTransientConnectionException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSException_(JavaSqlSQLTransientConnectionException *self, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSException_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSException_(NSString *reason, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSString_withNSException_(NSString *reason, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withNSException_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *sqlState, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *sqlState, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_withNSException_(JavaSqlSQLTransientConnectionException *self, NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *new_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLTransientConnectionException *create_JavaSqlSQLTransientConnectionException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLTransientConnectionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLTransientConnectionException")