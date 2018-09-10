//============================================================================
// Name        : chislo_nazad2.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : Me
// Description : Дано натуральное число N . Получить новое число, записав цифры
// числа N в обратном порядке. Например, 17852 — 25871
// Делает тоже самое записывая разряды в вектор. В векторе цифры находятся уже
// в обратном порядке и их остается только вывести циклом for each
//============================================================================
#include <iostream>
#include <vector>
using namespace std;

int find_kol(unsigned long N) {
	//Выдает количество цифр в числе
	unsigned long M;
	int kol;
	for(kol = 1, M = N; M / 10 > 0; kol++, M/=10);
	return kol;

}

int main() {

	unsigned long M, N;
	int kol, i;
	vector<int> chisla;

	cout << "N = ";
	cin >> N;

	kol = find_kol(N);
	for(M = N, i = 0; i < kol; M/=10, i++) //отделяем разряд прямо в цикле
		chisla.push_back(M%10); //записываем разряд в вектор


	cout << "N <-> = ";

	for(auto ch: chisla) cout << ch;

	cout << endl;


	return 0;
}
