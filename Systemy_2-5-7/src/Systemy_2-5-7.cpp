//============================================================================
// Name        : Systemy_2-5-7.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Задано число X в десятичной системе счисления. Выполнить пере-
// вод числа в системы счисления с основанием 2, 5 и 7
//============================================================================

#include <iostream>
using namespace std;

unsigned long long int NC(unsigned long long int N, unsigned int b) {
	/*
	 * Алгоритм:
	 * 1. Разделить данное число на основание новой системы счисления: остаток от
	 * деления — младший разряд нового числа;
	 * 2. Если частное от деления не равно нулю, продолжать деление, как указано
	 * в п.1.
	 */
	unsigned long long int P, S;

	for(S = 0, P = 1; N != 0; S+=N%b*P, P*=10, N/=b);

	return S;
}

int main() {

	unsigned long long int X;
	cout << "X = ";
	cin >> X;
	cout << "X (10) = " << NC(X,2) << " (2)" << endl;
	cout << "X (10) = " << NC(X,5) << " (5)" << endl;
	cout << "X (10) = " << NC(X,7) << " (7)" << endl;
	cout << "X (10) = " << NC(X,8) << " (8)" << endl;

	return 0;
}
