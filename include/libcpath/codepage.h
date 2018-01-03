/*
 * Codepage definitions for libcpath
 *
 * Copyright (C) 2008-2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBCPATH_CODEPAGE_H )
#define _LIBCPATH_CODEPAGE_H

#include <libcpath/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBCPATH_CODEPAGES
{
	LIBCPATH_CODEPAGE_ASCII				= 20127,

	LIBCPATH_CODEPAGE_ISO_8859_1			= 28591,
	LIBCPATH_CODEPAGE_ISO_8859_2			= 28592,
	LIBCPATH_CODEPAGE_ISO_8859_3			= 28593,
	LIBCPATH_CODEPAGE_ISO_8859_4			= 28594,
	LIBCPATH_CODEPAGE_ISO_8859_5			= 28595,
	LIBCPATH_CODEPAGE_ISO_8859_6			= 28596,
	LIBCPATH_CODEPAGE_ISO_8859_7			= 28597,
	LIBCPATH_CODEPAGE_ISO_8859_8			= 28598,
	LIBCPATH_CODEPAGE_ISO_8859_9			= 28599,
	LIBCPATH_CODEPAGE_ISO_8859_10			= 28600,
	LIBCPATH_CODEPAGE_ISO_8859_11			= 28601,
	LIBCPATH_CODEPAGE_ISO_8859_13			= 28603,
	LIBCPATH_CODEPAGE_ISO_8859_14			= 28604,
	LIBCPATH_CODEPAGE_ISO_8859_15			= 28605,
	LIBCPATH_CODEPAGE_ISO_8859_16			= 28606,

	LIBCPATH_CODEPAGE_KOI8_R			= 20866,
	LIBCPATH_CODEPAGE_KOI8_U			= 21866,

	LIBCPATH_CODEPAGE_WINDOWS_874			= 874,
	LIBCPATH_CODEPAGE_WINDOWS_932			= 932,
	LIBCPATH_CODEPAGE_WINDOWS_936			= 936,
	LIBCPATH_CODEPAGE_WINDOWS_949			= 949,
	LIBCPATH_CODEPAGE_WINDOWS_950			= 950,
	LIBCPATH_CODEPAGE_WINDOWS_1250			= 1250,
	LIBCPATH_CODEPAGE_WINDOWS_1251			= 1251,
	LIBCPATH_CODEPAGE_WINDOWS_1252			= 1252,
	LIBCPATH_CODEPAGE_WINDOWS_1253			= 1253,
	LIBCPATH_CODEPAGE_WINDOWS_1254			= 1254,
	LIBCPATH_CODEPAGE_WINDOWS_1255			= 1255,
	LIBCPATH_CODEPAGE_WINDOWS_1256			= 1256,
	LIBCPATH_CODEPAGE_WINDOWS_1257			= 1257,
	LIBCPATH_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBCPATH_CODEPAGE_US_ASCII			LIBCPATH_CODEPAGE_ASCII

#define LIBCPATH_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBCPATH_CODEPAGE_ISO_8859_1
#define LIBCPATH_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBCPATH_CODEPAGE_ISO_8859_2
#define LIBCPATH_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBCPATH_CODEPAGE_ISO_8859_3
#define LIBCPATH_CODEPAGE_ISO_NORTH_EUROPEAN		LIBCPATH_CODEPAGE_ISO_8859_4
#define LIBCPATH_CODEPAGE_ISO_CYRILLIC			LIBCPATH_CODEPAGE_ISO_8859_5
#define LIBCPATH_CODEPAGE_ISO_ARABIC			LIBCPATH_CODEPAGE_ISO_8859_6
#define LIBCPATH_CODEPAGE_ISO_GREEK			LIBCPATH_CODEPAGE_ISO_8859_7
#define LIBCPATH_CODEPAGE_ISO_HEBREW			LIBCPATH_CODEPAGE_ISO_8859_8
#define LIBCPATH_CODEPAGE_ISO_TURKISH			LIBCPATH_CODEPAGE_ISO_8859_9
#define LIBCPATH_CODEPAGE_ISO_NORDIC			LIBCPATH_CODEPAGE_ISO_8859_10
#define LIBCPATH_CODEPAGE_ISO_THAI			LIBCPATH_CODEPAGE_ISO_8859_11
#define LIBCPATH_CODEPAGE_ISO_BALTIC			LIBCPATH_CODEPAGE_ISO_8859_13
#define LIBCPATH_CODEPAGE_ISO_CELTIC			LIBCPATH_CODEPAGE_ISO_8859_14

#define LIBCPATH_CODEPAGE_ISO_LATIN_1			LIBCPATH_CODEPAGE_ISO_8859_1
#define LIBCPATH_CODEPAGE_ISO_LATIN_2			LIBCPATH_CODEPAGE_ISO_8859_2
#define LIBCPATH_CODEPAGE_ISO_LATIN_3			LIBCPATH_CODEPAGE_ISO_8859_3
#define LIBCPATH_CODEPAGE_ISO_LATIN_4			LIBCPATH_CODEPAGE_ISO_8859_4
#define LIBCPATH_CODEPAGE_ISO_LATIN_5			LIBCPATH_CODEPAGE_ISO_8859_9
#define LIBCPATH_CODEPAGE_ISO_LATIN_6			LIBCPATH_CODEPAGE_ISO_8859_10
#define LIBCPATH_CODEPAGE_ISO_LATIN_7			LIBCPATH_CODEPAGE_ISO_8859_13
#define LIBCPATH_CODEPAGE_ISO_LATIN_8			LIBCPATH_CODEPAGE_ISO_8859_14
#define LIBCPATH_CODEPAGE_ISO_LATIN_9			LIBCPATH_CODEPAGE_ISO_8859_15
#define LIBCPATH_CODEPAGE_ISO_LATIN_10			LIBCPATH_CODEPAGE_ISO_8859_16

#define LIBCPATH_CODEPAGE_KOI8_RUSSIAN			LIBCPATH_CODEPAGE_KOI8_R
#define LIBCPATH_CODEPAGE_KOI8_UKRAINIAN		LIBCPATH_CODEPAGE_KOI8_U

#define LIBCPATH_CODEPAGE_WINDOWS_THAI			LIBCPATH_CODEPAGE_WINDOWS_874
#define LIBCPATH_CODEPAGE_WINDOWS_JAPANESE		LIBCPATH_CODEPAGE_WINDOWS_932
#define LIBCPATH_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBCPATH_CODEPAGE_WINDOWS_936
#define LIBCPATH_CODEPAGE_WINDOWS_KOREAN		LIBCPATH_CODEPAGE_WINDOWS_949
#define LIBCPATH_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBCPATH_CODEPAGE_WINDOWS_950
#define LIBCPATH_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBCPATH_CODEPAGE_WINDOWS_1250
#define LIBCPATH_CODEPAGE_WINDOWS_CYRILLIC		LIBCPATH_CODEPAGE_WINDOWS_1251
#define LIBCPATH_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBCPATH_CODEPAGE_WINDOWS_1252
#define LIBCPATH_CODEPAGE_WINDOWS_GREEK			LIBCPATH_CODEPAGE_WINDOWS_1253
#define LIBCPATH_CODEPAGE_WINDOWS_TURKISH		LIBCPATH_CODEPAGE_WINDOWS_1254
#define LIBCPATH_CODEPAGE_WINDOWS_HEBREW		LIBCPATH_CODEPAGE_WINDOWS_1255
#define LIBCPATH_CODEPAGE_WINDOWS_ARABIC		LIBCPATH_CODEPAGE_WINDOWS_1256
#define LIBCPATH_CODEPAGE_WINDOWS_BALTIC		LIBCPATH_CODEPAGE_WINDOWS_1257
#define LIBCPATH_CODEPAGE_WINDOWS_VIETNAMESE		LIBCPATH_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBCPATH_CODEPAGE_H ) */

