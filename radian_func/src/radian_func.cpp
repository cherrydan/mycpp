//============================================================================
// Name        : radian_func.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : стр. 103
// Description : Функции.
// Функция radian, используемая для вычисления формулы
//============================================================================

#include <iostream>
#include "radian.hpp"
#include <math.h>
using namespace std;

int main() {

	int DEG, MIN, SEC;
	double RAD;

	cout << "Введите меры угла A в градусах, минутах и секундах: ";
	cin >> DEG >> MIN >> SEC;

	cout << "DEG = " << DEG << " MIN = " << MIN << " SEC = " << SEC << endl;

	//Вычисляем величину в RAD
	RAD = radian(DEG, MIN, SEC);

	cout << "Угол А в радианах = " << RAD << endl;

	//вычисление выражения и его вывод
	cout << "sin (A) ^ 2 + cos(A) ^ 2 = ";
	cout << pow(sin(RAD),2) + pow(cos(RAD),2) << endl;



	return 0;
}
