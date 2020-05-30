#include <stdio.h>
#include <stdlib.h>
void print_phrase();
void print_end();
int main()
{
    print_phrase();
    print_phrase();
    print_phrase();
    print_end();
    return 0;
}

void print_phrase() {
printf("Наш Билли - хороший парень!\n");
}

void print_end() {
printf("Наш Билли - лучше всех!");
}
