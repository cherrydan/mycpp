#include <stdio.h>
/* ДЗ урок 30*/
typedef float(*TFunc)(float, float);

//складывает два вещественных числа
float add(float a, float b)
{
    return a+b;
}
//перемножает два вещественных числа
float mul(float a, float b)
{
    return a*b;
}

float getOne(float a, float b, TFunc fn)
{
    return fn(a, b);
}

int main()
{
    TFunc aFn[2] = { add, mul };
    for(int i = 0; i < 2; i++)
        printf("%f ", getOne(2.33, 54.5437, aFn[i]));

    return 0;
}
