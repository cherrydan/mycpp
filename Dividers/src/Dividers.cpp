//============================================================================
// Name        : Dividers.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Дано натуральное число N . Определить K — количество делите-
// лей этого числа, меньших самого числа (Например, для N =12 делители 1, 2, 3,
// 4, 6. Количество K=5).
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N, K, i;
	cout << "N = ";
	cin >> N;
	K = 0;
	for(i = 1; i <= N / 2; i++) {
		if(N % i == 0) K++; //Если N делится на i без остатка - приращиваем количество делителей
	}
	cout << "Количество делителей числа N меньше самого числа: " << K << endl;

	return 0;
}
