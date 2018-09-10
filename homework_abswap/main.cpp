#include <iostream>

using namespace std;

/*
 *
 * ЗАДАНИЕ
 * 9. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
 */

int main()
{
    float a, b;
    float c;
    printf("Введите два числа: ");
    scanf("%f%f",&a,&b);
    printf("a = %3.2f, b = %3.2f\n",a, b);
    c = a;
    a = b;
    b = c;
    printf("a = %3.2f, b = %3.2f\n", a, b);
    return 0;
}

