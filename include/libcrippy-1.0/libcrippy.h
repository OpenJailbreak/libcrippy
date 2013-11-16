/**
  * libcrippy-1.0 - common.h
  * Copyright (C) 2013 Crippy-Dev Team
  * Copyright (C) 2010-2013 Joshua Hill
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef COMMON_H
#define COMMON_H


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <libgen.h>
#include <sys/stat.h>

#include <plist/plist.h>

#include "libcrippy-1.0/file.h"
#include "libcrippy-1.0/fuzz.h"
#include "libcrippy-1.0/debug.h"
#include "libcrippy-1.0/boolean.h"
#include "libcrippy-1.0/directory.h"
#include "libcrippy-1.0/endianness.h"
#include "libcrippy-1.0/architecture.h"

#define BUFSMALL    0x40
#define BUFMEDIUM   0x400
#define BUFLARGE    0x4000


typedef enum  {
	PLIST_FORMAT_XML,
	PLIST_FORMAT_BINARY
} plist_format_t;


char* prot2str(uint32_t prot);
void hexdump(unsigned char* data, unsigned int amount);
int check_ascii_pointer(uint32_t pointer);
int check_ascii_string(const char* string, size_t length);
void print_progress(double progress, void* data);
char* str_toupper(char* str);
char* format_size_for_display(uint64_t size);

int plist_read(const char* path, plist_t* plist);
int plist_write(const char* path, plist_t plist, plist_format_t format);
void print_progress_real(double progress, int flush);

#endif /* COMMON_H */
