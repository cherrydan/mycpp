#include <iostream>

/*
 * 12. Даны переменные A, B, C. Изменить их значения, переместив содержимое
 * A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
 */


using namespace std;

int main()
{
    float a, b, c;
    float b1, c1;
    printf("Введите три числа (a, b, c) ");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    b1 = b;
    b = a;
    c1 = c;
    a = c1;
    c = b1;

    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    return 0;
}

