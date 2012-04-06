/*
 * Library to support cross-platform C path functions
 *
 * Copyright (c) 2008-2012, Joachim Metz <jbmetz@users.sourceforge.net>
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

#if !defined( _LIBCPATH_H )
#define _LIBCPATH_H

#include <libcpath/codepage.h>
#include <libcpath/definitions.h>
#include <libcpath/error.h>
#include <libcpath/extern.h>
#include <libcpath/features.h>
#include <libcpath/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* -------------------------------------------------------------------------
 * Support functions
 * ------------------------------------------------------------------------- */

/* Returns the library version as a string
 */
LIBCPATH_EXTERN \
const char *libcpath_get_version(
             void );

/* -------------------------------------------------------------------------
 * Error functions
 * ------------------------------------------------------------------------- */

/* Frees the error including elements
 */
LIBCPATH_EXTERN \
void libcpath_error_free(
      libcpath_error_t **error );

/* Prints a descriptive string of the error to the stream
 * Returns the number of printed characters if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_error_fprint(
     libcpath_error_t *error,
     FILE *stream );

/* Prints a descriptive string of the error to the string
 * Returns the number of printed characters if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_error_sprint(
     libcpath_error_t *error,
     char *string, 
     size_t size );

/* Prints a backtrace of the error to the stream
 * Returns the number of printed characters if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_error_backtrace_fprint(
     libcpath_error_t *error,
     FILE *stream );

/* Prints a backtrace of the error to the string
 * Returns the number of printed characters if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_error_backtrace_sprint(
     libcpath_error_t *error,
     char *string,
     size_t size );

/* -------------------------------------------------------------------------
 * Path functions
 * ------------------------------------------------------------------------- */

/* Changes the directory
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_change_directory(
     const char *directory_name,
     libcpath_error_t **error );

/* Retrieves the current working directory
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_get_current_working_directory(
     char **current_working_directory,
     size_t *current_working_directory_size,
     libcpath_error_t **error );

/* Determines the full path of the path specified
 * Returns 1 if succesful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_get_full_path(
     const char *path,
     size_t path_length,
     char **full_path,
     size_t *full_path_size,
     libcpath_error_t **error );

/* Combines the directory name and filename into a path
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_join(
     char **path,
     size_t *path_size,
     const char *directory_name,
     size_t directory_name_length,
     const char *filename,
     size_t filename_length,
     libcpath_error_t **error );

/* Makes the directory
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_make_directory(
     const char *directory_name,
     libcpath_error_t **error );

/* Sanitizes the path
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_sanitize(
     char *path,
     size_t *path_size,
     libcpath_error_t **error );

/* Sanitizes the filename
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_sanitize_filename(
     char *filename,
     size_t *filename_size,
     libcpath_error_t **error );

#if defined( HAVE_WIDE_CHARACTER_TYPE )

/* Changes the directory
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_change_directory_wide(
     const wchar_t *directory_name,
     libcpath_error_t **error );

/* Retrieves the current working directory
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_get_current_working_directory_wide(
     wchar_t **current_working_directory,
     size_t *current_working_directory_size,
     libcpath_error_t **error );

/* Determines the full path of the path specified
 * Returns 1 if succesful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_get_full_path_wide(
     const wchar_t *path,
     size_t path_length,
     wchar_t **full_path,
     size_t *full_path_size,
     libcpath_error_t **error );

/* Combines the directory name and filename into a path
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_join_wide(
     wchar_t **path,
     size_t *path_size,
     const wchar_t *directory_name,
     size_t directory_name_length,
     const wchar_t *filename,
     size_t filename_length,
     libcpath_error_t **error );

/* Makes the directory
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_make_directory_wide(
     const wchar_t *directory_name,
     libcpath_error_t **error );

/* Sanitizes the path
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_sanitize_wide(
     wchar_t *path,
     size_t *path_size,
     libcpath_error_t **error );

/* Sanitizes the filename
 * Returns 1 if successful or -1 on error
 */
LIBCPATH_EXTERN \
int libcpath_path_sanitize_filename_wide(
     wchar_t *filename,
     size_t *filename_size,
     libcpath_error_t **error );

#endif /* defined( HAVE_WIDE_CHARACTER_TYPE ) */

#if defined( __cplusplus )
}
#endif

#endif

