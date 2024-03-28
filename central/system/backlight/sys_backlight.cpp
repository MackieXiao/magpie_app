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

#include "sys_backlight.h"
#include <iostream>
#include <fstream>


using namespace std;


#define FILE_BRIGHTNESS "/sys/class/backlight/backlight/brightness"


/*!
 * @brief get current backlight value
 *
 * @return current backlight value. -1 for failed
*/
int get_backlight(void)
{
    string line;

    ifstream file(FILE_BRIGHTNESS);
    if (!file.good())
        return -1;

    getline(file, line);
    file.close();
    return stoi(line);
}

/*!
 * @brief set current backlight value
 *
 * @param value: backlight value
 *
 * @return current backlight value. -1 for failed
*/
int set_backlight(uint32_t value)
{
    string line;

    line = to_string(value);
    ofstream file(FILE_BRIGHTNESS);
    if (!file.good())
        return -1;

    file << line << endl;
    file.close();
    return value;
}
