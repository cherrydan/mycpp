/*
 * copy symb.c
 *
 *  Created on: 04.06.2017
 *      Author: danny
 *      Задание: копировать входной поток символов на выход, замените табуляцию на видимое \t забой на видимое \b и пробел на _
 */

#include <stdio.h>

int main() {
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			putchar('\\');
			putchar('t');
			putchar(32);
		}
		if(c == '\b') {
			putchar('\\');
			putchar('b');
			putchar(32);
		}
		if(c == 32) {
			putchar('_');
		}
		putchar(c);
	}
	return 0;
}


