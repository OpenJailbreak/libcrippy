/**
  * libcrippy-1.0 - fuzz.h
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

#ifndef FUZZ_H_
#define FUZZ_H_


unsigned int random_int();
unsigned char random_char();
unsigned short random_short();
int random_string(unsigned char* buffer, unsigned int size);
int randomize_string(unsigned char* buffer, int size, float amount);
#endif /* FUZZ_H_ */
