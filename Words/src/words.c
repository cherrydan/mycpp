/*
 * words.c
 *
 *  Created on: 10.06.2017
 *      Author: danny
 *		Задание: Напишите программу, которая печатает содержимое своего ввода, помещая по одному слову на каждой строке.
 *
 */


#include <stdio.h>

int main() {
	int c;
	while((c = getchar()) != EOF) {
		if(c == 32) {
			putchar('\n');
		}
		putchar(c);
	}
	return 0;
}


