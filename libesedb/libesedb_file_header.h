/*
 * File header functions
 *
 * Copyright (C) 2009-2018, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBESEDB_FILE_HEADER_H )
#define _LIBESEDB_FILE_HEADER_H

#include <common.h>
#include <types.h>

#include "libesedb_libbfio.h"
#include "libesedb_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libesedb_file_header libesedb_file_header_t;

struct libesedb_file_header
{
	/* The file type
	 */
	uint32_t file_type;

	/* The creation format version
	 */
	uint32_t creation_format_version;

	/* The creation format revision
	 */
	uint32_t creation_format_revision;

	/* The format version
	 */
	uint32_t format_revision;

	/* The format revision
	 */
	uint32_t format_version;

	/* The page size
	 */
	uint32_t page_size;
};

int libesedb_file_header_initialize(
     libesedb_file_header_t **file_header,
     libcerror_error_t **error );

int libesedb_file_header_free(
     libesedb_file_header_t **file_header,
     libcerror_error_t **error );

int libesedb_file_header_read_data(
     libesedb_file_header_t *file_header,
     const uint8_t *data,
     size_t data_size,
     libcerror_error_t **error );

int libesedb_file_header_read_file_io_handle(
     libesedb_file_header_t *file_header,
     libbfio_handle_t *file_io_handle,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBESEDB_FILE_HEADER_H ) */
