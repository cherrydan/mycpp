#include <iostream>
#include <math.h>
#include <stdio.h>



/*
 * ЗАДАНИЕ
 * Даны три числа — a, b, c. Найти среднее арифметическое и среднее геомет-
 * рическое заданных чисел.
 */

using namespace std;

/*
 * Функция float sred_ari(float a, float b, float c)
 * вычисляет среднее арифметическое
 * S_ar = (a + b + c) / 3;
 */
float sred_ari(float a, float b,  float c) {
    return (a + b + c) / 3;
}

/*
 * Функция float sred_geo(float a, float b, float c)
 * вычисляет среднее геометрическое
 * Кубический корень  pow(x, 1.0 / 3.0);
 * S_geo = pow((a * b * c), 1.0 / 3.0)
 */

float sred_geo(float a, float b, float c) {
    return pow((a * b * c), 1.0 / 3.0);
}


int main()
{
    float a, b, c;
    printf("Введите три числа: ");
    scanf("%f%f%f", &a, &b, &c);
    float Sr_ar = sred_ari(a, b, c);
    printf("Среднее арифметическое введенных чисел: %5.2f\n", Sr_ar);
    float Sr_geo = sred_geo(a, b, c);
    printf("Среднее геометрическое введенных чисел: %5.2f\n", Sr_geo);
    return 0;

}

