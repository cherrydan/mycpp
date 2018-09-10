//============================================================================
// Name        : Binary_search.cpp
// Author      : Как без использования стандартной библиотеки С++ организовать бинарный поиск
// Version     :
// Copyright   : Me
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 *
 * Бинарный поиск - ускоренный вид поиска в отсортированном массиве
 *
 *
 * O(log n)
 *
 */

#include <iostream>
#include <math.h> /*Подключаем математические функции*/
#define ARRAY_SIZE 1000 /*Максимальный размер массива со значениями*/

using namespace std;

int binary_search(int list[], int item, int list_size)
{
	int low = 0; /*Нижняя граница поиска*/
	int high = list_size - 1; /*Верхняя граница поиска*/
	/*Пока граница поиска не сузится до одного элемента*/
	while(low<=high) {
		int mid = (low + high); /*Проверяем средний элемент списка*/
		int guess = list[mid];
		if(guess == item) return mid; /*Если значение найдено*/
		if(guess > item) {
		high = mid - 1;
		} /*Много*/
		else {
			low = mid + 1; /*Мало*/
		}

	}
	return -1; /*Значение не найдено*/
}

int main() {

	int s_value;

	int my_list[ARRAY_SIZE];

	int fill = 1;
	/*Заполняем массив из 1000 элементов нечетными числами от 1*/
	int counter = 0;
	while(counter < ARRAY_SIZE) {
		my_list[counter] = fill;
		fill+=2;
		counter++;
	}

	/*Просим пользователя ввести значение, которое он хочет поискать в массиве*/
	cout << "Введите число, которое нужно найти в массиве my_list: ";
	cin >> s_value;
	/*Если функция не возвращает -1, значит значение найдено в массиве*/
	if(binary_search(my_list, s_value, ARRAY_SIZE) != -1) {
		cout << "Значение " << s_value << " найдено в массиве my_list в " <<  binary_search(my_list, s_value, ARRAY_SIZE) << " ячейке" << endl;
	}
	else { /*Если не найдено выводим сообщение*/
		cout << "Значение " << s_value << " не найдено!";
		return 1;
	}
	/*Вычисляем значение О-большое: скорость нашего алгоритма*/
	/*Заметка: в языке Си библиотечная функция log реализована гораздо богаче*/
	cout << "Массив my_list на " << ARRAY_SIZE << " элементов. O(n) = " <<  log2(ARRAY_SIZE) << endl;


	return 0;
}
