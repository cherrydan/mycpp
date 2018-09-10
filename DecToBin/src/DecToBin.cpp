//============================================================================
// Name        : DecToBin.cpp
// Author      : Me
// Version     :
// Copyright   : 
// Description : Перевод введенного десятичного числа в двоичное
//				 остатки от деления это и будут разряды двоичного числа
//				 я придумал запихивать их в вектор, а потом выводить downto
// 			     циклом
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	unsigned N, chastnoe;
	vector<int> ostatok;

	cout << "N = "; cin >> N;

	if(N >= 1) {

	chastnoe = N;

	while(chastnoe != 0) {
		ostatok.push_back(chastnoe % 2);
		chastnoe /= 2;
	}

	for(int c = ostatok.size() - 1; c >= 0; c--) {
		cout << ostatok[c];
	}

	cout << endl;

	return 0;
	}

	else {
		cout << "Вводить только положительные числа! Программа аварийно завершилась" << endl;
		return 1;
	}
}
