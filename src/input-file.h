/*
 *  input-file.h
 *  RTLSDR-specific declarations
 *
 *  Copyright (c) 2015-2021 Tomasz Lemiech <szpajder@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses/>.
 */

#include <fstream>
#include <iostream>
#include <string>

typedef struct {
    char* filepath;
    FILE* input_file;
    float speedup_factor;
} file_dev_data_t;
