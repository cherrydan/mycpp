//============================================================================
// Name        : chislo_nazad.cpp
// Author      : Учебник по Qt
// Version     :
// Copyright   : 
// Description : Дано натуральное число N . Получить новое число, записав цифры
// числа N в обратном порядке. Например, 17852 — 25871.
// Входные данные: N — целое число.
// Выходные данные: S — целое число, полученное из цифр числа N , записанных
// в обратном порядке.
// Промежуточные данные: i — параметр цикла, M — переменная для вре-
// менного хранения значения N , kol — количество разрядов в заданном числе,
// R = 10 kol — старший разряд заданного числа.
// S = 2 · 10 4 + 5 · 10 3 + 8 · 10 2 + 7 ·
//1 10 + 1 · 10 0 = 25871
//============================================================================

#include <iostream>
using namespace std;

int main() {
	unsigned long N, M, R, S;
	int kol, i;
	cout << "N = ";
	cin >> N;
	for(R = 1, kol = 1, M = N; M / 10 > 0; kol++, R*=10, M/=10);
	for(S = 0, M = N, i = 1; i <= kol; S+=M % 10 * R, M/=10, R/=10, i++);
	cout << "N<-> = " << S << endl;



	return 0;
}
