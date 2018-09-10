#include <iostream>
#include <math.h>
/*
 * 6. Даны катеты прямоугольного треугольника a и b. Найти гипотенузу c и
 * периметр P.
 */

using namespace std;
/*
 *  функция float find_perimeter(float a, b, c) = возвращает периметр прямоугольного треугольника
 */
float find_perimeter(float a, float b, float c) {
    return a + b + c;
}

/*
 * функция find_hypot(float a, b) = возвращает гипотенузу по заданным катетам a, b
 */
float find_hypot(float a, float b) {
    return sqrt((a*a)+(b*b));
}

int main()
{
    float a, b;
    float hyp, P;
    printf("Введите катеты a, b ");
    scanf("%f%f", &a,&b);
    hyp = find_hypot(a, b);
    P = find_perimeter(a, b, hyp);
    printf("Длина гипотенузы: %5.3f\nПериметр: %5.3f\n",hyp, P);
    return 0;
}

