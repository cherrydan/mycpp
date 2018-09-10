//============================================================================
// Name        : while_cycle.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Рассмотрим пример. Пусть необходимо вывести на экран таблицу значений
// функции y = e sin(x) cos(x) на отрезке [0; π] с шагом 0.1.
// Применив цикл с предусловием получим следующую программу:
// (Книга по Qt. Стр. 65
//============================================================================

#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

const float Pi = 3.14159;
const char Tab = '\t';



int main() {
	float x, y;
	x = 0;
	while(x <= Pi) {
		y = exp(sin(x)) * cos(x);
		cout << Tab << "x = " << setw(5) << x << Tab << "y = " << setw(8) << y <<endl;

		x+=0.1;
	}
	return 0;
}
