//============================================================================
// Name        : factorial.cpp
// Author      : Me
// Version     :
// Copyright   : 
// Description : Программа вычисляет факториал числа n пользуясь циклом
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned x, N;
	unsigned long factorial = 1;

	cout << "Введите число N (не слишком большое) ";
	cin >> N;
	if(N <= 16) {
	x = 1;

	while(x<=N) {
		factorial *= x;
		x++;
	}
	cout << "Factorial of " << N << " = " << factorial << endl;
	return 0;
	}
	else {
		cout << "Введено слишком большое число!";
		cout << "Программа аварийно завершилась!";
		return 1;
	}



}
