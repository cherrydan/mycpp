/*
 * recurs.c
 *
 *  Created on: 20.06.2017
 *      Author: danny
 *      Демонстрирует простой случай рекурсии
 *
 */


#include <stdio.h>

/*
 * Пишем  рекурсивно вызываемую функцию
 *
 */

void countdown(int n) {
	printf(" %d ", n);
	if(n <= 0) { /*Если достигнут 0 выходим*/
		return;
	}
	else {
		countdown(n - 1); /*Рекурсивный вызов*/
	}
}

int main() {
	int n;
	printf("Введите число: ");
	scanf("%d", &n);
	printf("\n");
	countdown(n);
	printf("\n");

	return 0;
}
