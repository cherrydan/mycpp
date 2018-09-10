#include <stdio.h>

void main() {
	char* string = "Hello, world!"; //Строки в С - указатель на массив символов
	printf("%s\n",string); //Печать форматированная
	string = "Let\'s learn Programming in C!";
	printf("%s\n", string);
}