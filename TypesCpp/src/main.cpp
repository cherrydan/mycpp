/*
 * main.cpp
 *
 *  Created on: 13.09.2017
 *      Author: danny
 */

#include <iostream>
#include <map> //Тип данных карточка
#include <vector> //Тип данных вектор

using namespace std;

int main() {
	vector<int> nums = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };  //Объявляем вектор на 10 элементов
	for(auto v: nums) {
		cout << v << " , ";
	}

	cout<< endl;

return 0;
}




