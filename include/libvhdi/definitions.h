/*
 * Definitions for libvhdi
 *
 * Copyright (C) 2012-2016, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBVHDI_DEFINITIONS_H )
#define _LIBVHDI_DEFINITIONS_H

#include <libvhdi/types.h>

#define LIBVHDI_VERSION						20160108

/* The version string
 */
#define LIBVHDI_VERSION_STRING					"20160108"

/* The access flags definitions
 * bit 1        set to 1 for read access
 * bit 2        set to 1 for write access
 * bit 3-8      not used
 */
enum LIBVHDI_ACCESS_FLAGS
{
	LIBVHDI_ACCESS_FLAG_READ				= 0x01,
/* Reserved: not supported yet */
	LIBVHDI_ACCESS_FLAG_WRITE				= 0x02
};

/* The file access macros
 */
#define LIBVHDI_OPEN_READ					( LIBVHDI_ACCESS_FLAG_READ )
/* Reserved: not supported yet */
#define LIBVHDI_OPEN_WRITE					( LIBVHDI_ACCESS_FLAG_WRITE )
/* Reserved: not supported yet */
#define LIBVHDI_OPEN_READ_WRITE					( LIBVHDI_ACCESS_FLAG_READ | LIBVHDI_ACCESS_FLAG_WRITE )

/* The disk type definitions
 */
enum LIBVHDI_DISK_TYPES
{
	LIBVHDI_DISK_TYPE_FIXED					= 0x00000002UL,
	LIBVHDI_DISK_TYPE_DYNAMIC				= 0x00000003UL,
	LIBVHDI_DISK_TYPE_DIFFERENTIAL				= 0x00000004UL,
};

#endif

