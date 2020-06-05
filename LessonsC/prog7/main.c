#include <stdio.h>
#include <stdlib.h>
/*
 Указатели и изменение значения переменной при помощи указателя
 */
int main()
{
    float x, y;
    x = 3.14;
    y = 2.50;
    printf("x = %.2f y = %.2f\n", x, y);
    float *fPtr = &x;
    *fPtr = 1.76;
    fPtr = &y;
    *fPtr = 2.90;
    printf("Изменение значений через указатель:\n x = %.2f y = %.2f\n", x, y);
    return 0;
}
