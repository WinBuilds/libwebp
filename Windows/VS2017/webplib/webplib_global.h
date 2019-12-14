#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(WEBPLIB_LIB)
#  define WEBPLIB_EXPORT Q_DECL_EXPORT
# else
#  define WEBPLIB_EXPORT Q_DECL_IMPORT
# endif
#else
# define WEBPLIB_EXPORT
#endif
