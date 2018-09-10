#include <iostream>
#include <math.h> //Подключаем математическую библиотеку
#include <stdio.h> //Подключаем ввод-вывод в стиле С

const float PI = 3.1415926535; //Число пи нам пригодится


using namespace std;
/*
 * Итак
 * Задание!
 * Дан диаметр окружности d. Найти длину окружности L и площадь круга S.
 */


/*
 * Функция вычисляет длину окружности по формуле
 * C = pi*d
 */
float find_length(float d) {
    return PI * d;
}

/*
 * Функция вычисляет площадь круга по формуле
 * S = PI/4 * d*d
 */

float find_S(float d) {
    return (PI/4) * pow(d,2);
}


int main()
{
    float d;
    printf("Введите диаметр окружности: ");
    scanf("%f",&d);
    float C = find_length(d);
    printf("Длина окружности %5.2f\n",C);
    float S = find_S(d);
    printf("Площадь круга %5.2f\n",S);
    return 0;
}

