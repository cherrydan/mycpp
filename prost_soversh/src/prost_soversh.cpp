//============================================================================
// Name        : prost_soversh.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Вводится последовательность из N целых чисел, найти среднее
// арифметическое совершённых чисел и среднее геометрическое простых чисел
// последовательности.
// Напомним, что целое число называется простым, если оно делится нацело
// только на само себя и единицу. Подробно алгоритм определения простого числа
// описан в задаче 3.15 (рис. 3.29). В этой задаче кроме простых чисел фигурируют
// совершённые числа. Число называется совершённым, если сумма всех делителей,
// меньших его самого, равна этому числу.
// P.S.:
// system ("read -p \"Press any key to continue ...\" -n 1");
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;



bool prostoe(unsigned N) {
	unsigned int i;
	bool pr;
	for(pr=true, i = 2; i <= N/2; i++)
		if(N % i == 0) {
			pr = false;
			return pr; break; }
	return pr;

}

bool soversh(unsigned N) {
	unsigned int i, S;
	for(S = 0, i = 1; i <= N/2; i++)
		if(N % i == 0) S+= i;
	if(S == N) return true;
	else return false;

}

int main() {

	unsigned int i, N, S, X, kp, ks;

	long int P;
	cout << "N = ";
	cin >> N;


	for(kp=ks=S = 0, P = 1, i = 1; i <= N; i++) {
		cout << "X = ";
		cin >> X;
		if(prostoe(X)) {
			kp++;
			P*=X;
		}
		if(soversh(X)) {
			ks++;
			S+=X;
		}
	}

	if(kp > 0) {
		cout << "Среднее геометрическое простых чисел из набора = " << pow(P, (float)1/kp) << endl;;
	}
	else {
		cout << "Нет простых чисел!" << endl;
	}

	if(ks > 0) {
		cout << "Среднее арифметическое суммы совершённых чисел из набора = " << (float) S/ks << endl;
	}
	else {
		cout << "Нет совершённых чисел!" << endl;
	}



	return 0;
}
