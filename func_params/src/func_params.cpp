//============================================================================
// Name        : func_params.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : При передаче данных по значению функция работает с копиями фактиче-
// ских параметров, и доступа к исходным значениям аргументов у неё нет. При
// передаче данных по адресу в функцию передаётся не переменная, а её адрес, и,
// следовательно, функция имеет доступ к ячейкам памяти, в которых хранятся
// значения аргументов. Таким образом, данные, переданные по значению, функ-
// ция изменить не может, в отличие от данных, переданных по адресу.
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

//Данные передаваемые по значению (READ-only)
int f1(int i) {
	return i++;
}

//Данные передаются по адресу (WRITE)
int f2(int *j) {
	return ((*j)++); //
}

//Данные передаются по адресу, модифицирование запрещено (READ-only pointer)
/*
int f3(const int *k) {
	return ((*k)++);
}
*/

int main()
{
	int a;
	cout << "a = ";
	cin >> a;
	f1(a);
	cout << "a = " << a << endl;
	getchar();
	//для передачи адреса переменной а берется оператор взятия адреса &
	f2(&a);
	cout << "a = " << a << endl;
	getchar();
	//для передачи адреса берется оператор взятия адреса &
	//f3(&a);
	cout << "a = " << a << endl;
	getchar();



	return 0;
}
