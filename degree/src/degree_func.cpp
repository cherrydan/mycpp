/*
 * degree_func.cpp
 *
 *  Created on: 29.10.2017
 *      Author: danny
 *      Реализация degree_func
 *
 */

#include "degree_func.hpp"
#include <math.h>

void degree(double rad, int *deg, int *min, int *sec){
	*deg = floor(rad * 180 / PI); //*deg = запись значения в указатель
	*min = floor((rad * 180 / PI -(*deg)) * 60);
	*sec = floor(((rad * 180 / PI -(*deg)) * 60 -(*min)) * 60);
}


