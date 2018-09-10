//============================================================================
// Name        : Min_Max_Prost_Sost.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Вводится последовательность целых чисел, 0 — конец последова-
// тельности. Найти минимальное число среди простых чисел и максимальное —
// среди чисел, не являющихся простыми.
//============================================================================

#include <iostream>
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



int main() {

	int kp = 0, knp = 0;
	unsigned int N, min, max;

	for(cout << "N = ", cin >> N; N != 0; cout << "N = ", cin >> N)
		if(prostoe(N)) {
			kp++;
			if(kp == 1) min = N;
			else if(N < min) min = N;
		}
		else {
			knp++;
			if(knp == 1) max = N;
			else if(N > max) max = N;
		}

	if(kp > 0)
		cout << "Минимальное среди введеных простых чисел = " << min << endl;
	else
		cout << "Нет простых чисел!!!" << endl;

	if(knp > 0)
		cout << "Максимальное среди введенных составных чисел = " << max << endl;
	else
		cout << "Нет составных чисел!!!";


	return 0;
}
