/*
 ============================================================================
 Name        : test1.c
 Author      : Учебник по Qt
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main(void) {

	int counter;

	int i = 5;

	static int s  = 7;

	for(counter  = 0; counter < 3; ++counter) {
		int i = 1;
		static int s = 1;
		printf("i == %d s == %d", i, s);
		++i;
		++s;
	}

	printf("i == %d s == %d", i, s);
	return 0;
}
