#include <iostream>
#include <math.h>

/*
 * 15. Даны два ненулевых числа a и b. Найти сумму S, разность R, произведение
 * P и частное D модулей заданных чисел.
 */



using namespace std;

int main()
{
    float a, b;
    float S, R, P, D;
    printf("Введите два числа (a, b): ");
    scanf("%f%f", &a, &b); //Указателями передаются параметры функции, когда в эти параметры нужно значение ЗАПИСАТЬ, как в данном случае, в a, b будут записаны введенные пользователем значения
    S = fabs(a) + fabs(b);
    R = fabs(a) - fabs(b);
    P = fabs(a) * fabs(b);
    D = fabs(a) / fabs(b);
    printf("\ta + b = %.2f\n\ta - b = %.2f\n\ta * b = %.2f\n\ta / b  = %.2f\n", S, R, P, D);

    return 0;
}

