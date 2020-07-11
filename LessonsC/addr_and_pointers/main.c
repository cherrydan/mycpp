#include <stdio.h>
#include <stdlib.h>
/*
 Адреса и указатели.
 Тимофей Хирьянов
 */

int main()
{
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;

    printf("i = %d\n", i);
    *pi = 20;
    printf("*pi = %d\n", i);
    **ppi = 30;
    printf("**ppi = %d\n", i);
    ***pppi = 40;
    printf("***pppi = %d\n", i);

    return 0;
}
