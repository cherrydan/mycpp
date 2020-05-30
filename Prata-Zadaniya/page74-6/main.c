#include <stdio.h>
#include <stdlib.h>
void one_tree();
void two();
int main()
{
    printf("начать сейчас:\n");
    one_tree();
    printf("порядок!");
    return 0;
}

void one_tree() {
printf("один\n");
two();
printf("три\n");
}

void two() {
printf("два\n");
}
