//============================================================================
// Name        : Natural.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Вычислить сумму натуральных чисел, не превышающих N
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N; //Ограничитель
	int S = 0; //Сумма
	int i; //Счетчик
	cout << "N = ";
	cin >> N;
	for (i = 2; i <= N; i = i+2) {
		S = S + i;
	}
	cout << "Сумма четных натуральных чисел до N = " << S << endl;


	return 0;
}
