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

/* Prefix everything with QIO_ */
#define QIO_PACKAGE PACKAGE
#define QIO_PACKAGE_BUGREPORT PACKAGE_BUGREPORT
#define QIO_PACKAGE_NAME PACKAGE_NAME
#define QIO_PACKAGE_STRING PACKAGE_STRING
#define QIO_PACKAGE_TARNAME PACKAGE_TARNAME
#define QIO_PACKAGE_VERSION PACKAGE_VERSION
#define QIO_VARSION VERSION


/* Undef the unwanted */
#undef PACKAGE
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION
#undef VERSION
#endif
