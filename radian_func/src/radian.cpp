/*
 * radian.cpp
 *
 *  Created on: 29.10.2017
 *      Author: danny
 *      Реализация функции radian, описанной в соотв. заголовочном файле
 *
 */

#include "radian.hpp"

double radian(int deg, int min, int sec)
{
	return (deg * PI / 180 + min * PI / 180 / 60 + sec * PI / 180 / 60 / 60);
}



