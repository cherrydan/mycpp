#include <stdio.h>
#include <stdlib.h>
/* Передача параметра функции по указателю*/

void Inc3(int *x, int *y)
{
    if (x != NULL && y != NULL)
        {
            *x += 1;
            *y *= 2;
        }
}

void swap(int *x, int *y)
{
    if(x != NULL && y != NULL)
        {
            *x += *y; //6 + 20 = x26
            *y = *x - *y; //26-20 = y6
            *x = *x - *y; // 26 - 6 = x20
        }
}

int main()
{
    int x = 5, y = 10;
    printf("x = %d, y = %d\n", x,y);
    Inc3(&x, &y);
    printf("Увеличиваем переменную x на 1\nА переменную y в два раза, через указатель\n");
    printf("x = %d y = %d\n", x, y);
    swap(&x, &y);
    printf("Меняем местами значения x и y через указатели\n");
    printf("x = %d y = %d\n", x, y);


    return 0;
}
