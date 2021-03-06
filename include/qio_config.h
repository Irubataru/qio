#ifndef QIO_CONFIG_H
#define QIO_CONFIG_H


/* Undef the unwanted from the environment -- eg the compiler command line */
#undef PACKAGE
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#undef VERSION

/* Include the stuff generated by autoconf */
#include "qio_config_internal.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Prefix everything with QIO_ */
static const char* const QIO_PACKAGE = PACKAGE;
static const char* const QIO_PACKAGE_BUGREPORT = PACKAGE_BUGREPORT;
static const char* const QIO_PACKAGE_NAME = PACKAGE_NAME;
static const char* const QIO_PACKAGE_STRING = PACKAGE_STRING;
static const char* const QIO_PACKAGE_TARNAME = PACKAGE_TARNAME;
static const char* const QIO_PACKAGE_VERSION = PACKAGE_VERSION;
static const char* const QIO_VERSION = VERSION;

#ifdef __cplusplus
}
#endif

/* Undef the unwanted */
#undef PACKAGE
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#undef VERSION
#endif
