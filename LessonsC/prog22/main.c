#include <stdio.h>

#define N 10
/* Указатель на функцию, передача функции как указателя в качестве параметра*/

//описываем тип функции которая будет нашим шаблонным указателем
typedef int (*TFunc)(int, int);

//реализация функции по шаблону*/
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

//функция, принимающая указатель на функцию как параметр
int getOne(int mas[], TFunc fn)
{
    int val = mas[0];
    if(fn != NULL)
        {
            for(int i = 1; i < N; i++)
                val = fn(val, mas[i]);
            return val;
        }
    else
        printf("There is no adress in func,return\n");
    return -1;
}
int main()
{
    //массив указателей на функции
    TFunc aFn[2];
    aFn[0] = min;
    aFn[1] = max;

    int a[N] = { 10, 438, 5484, 4, 25, 65894, 777, 45, 2, -5 };

    for(int i = 0; i < 2; i++)
    printf("%d\n", getOne(a, aFn[i]));

    return 0;
}
