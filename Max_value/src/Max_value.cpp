//============================================================================
// Name        : Max_value.cpp
// Author      : Ищет максимальное вещественное число в последовательности из N чисел
// Version     :
// Copyright   : Me
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	unsigned int i, N;
	float X;
	float Max;

	cout << "Введите кол-во чисел в последовательности > ";
	cin >> N;
	cout << "X = ";
	cin >> X;

	Max = X;
	for(i = 2; i<=N;i++) {
		cout << "X = ";
		cin >> X;
		if(X > Max) Max = X;
	}

	cout << "Max = " << Max << endl;

	return 0;
}
