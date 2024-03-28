/*
 * This file is part of the MackieXiao distribution (https://github.com/MackieXiao).
 * Copyright (c) 2024 Mackie Xiao.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SYS_BACKLIGHT_H
#define SYS_BACKLIGHT_H

#include <stdint.h>

int get_backlight(void);
int set_backlight(uint32_t value);


#endif // SYS_BACKLIGHT_H
