//============================================================================
// Name        : degree.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Далее приведён пример программы, в которой исходя из радианной меры
// некоторого угла вычисляется величина смежного с ним угла. На экран выво-
// дятся значения углов в градусной мере. Функция degree выполняет перевод из
// радианной меры в градусную 2 . Эта функция ничего не возвращает. Её аргумен-
// тами являются значение переменной rad, определяющее величину угла в радиа-
// нах, и адреса переменных deg, min, sec, в которых будут храниться вычисленные
// результаты — градусная мера угла.
//============================================================================

#include <iostream>
#include "degree_func.hpp"
#include <stdio.h>
using namespace std;

int main() {

	int DEG, MIN, SEC;
	double RAD;

	cout << "Угол А в радианах = ";
	cin >> RAD;
	cout << "Вы ввели угол " << RAD << " рад. " << endl;
	degree(RAD, &DEG, &MIN, &SEC); //Передаем в функцию degree адреса переменных
	cout << RAD << " = ";
	cout << DEG << " град. " << MIN << " мин. " << SEC << " сек. " << endl;

	cout << "PI - " << RAD << " = ";
	degree(PI - RAD, &DEG, &MIN, &SEC);

	cout << DEG << " град. " << MIN << " мин. " << SEC << " сек. " << endl;



	return 0;
}
