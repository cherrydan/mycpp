#include <iostream>
#include <stdio.h> //Для ввода-вывода в стиле С
#include <math.h> //Для функций sin и cos


using namespace std;

const float PI = 3.1415926535; //Число пи нам пригодится



/*
 * Итак.
 * ЗАДАНИЕ.
 * Известна гипотенуза c и прилежащий угол α прямоугольного треугольника.
 * Найти площадь треугольника S и угол β.
 * Угол β находим по формуле: β = 90 - α
 * Катеты находим по формуле: a=c*sin(α). b=c*cos(α).
 * понадобится функция перевода из градусов в радианы (!!!)
 * Площадь S находим по формуле S = 0.5 * a * b;
 */

/*
 * Функция float grad_to_rad(float grad) = переводит угол заданный в градусах в радианы
 */
float grad_to_rad(float grad)
{
    return (grad * (PI/180));
}

/*
 * Функция float find_angle_B(float angle_A)
 *
 * Возвращает угол бета в градусах, при заданном угле альфа
 */

float find_angle_B(float angle_A)
{
    return 90 - angle_A;
}

/*
 * Функция float find_katet_a(float angle_A, float c)
 * Возвращает катет a при заданном угле альфа в градусах и гипотенузе c
 */

float find_katet_a(float angle_A, float c)
{
    return c * (float)sin((float)grad_to_rad(angle_A));
}


/*
 * Функция float find_katet_b(float angle_A, float c)
 * Возвращает катет b при заданном угле альфа в градусах и гипотенузе c
 */
float find_katet_b(float angle_A, float c)
{
    return c * (float)cos(grad_to_rad(angle_A));
}

/*
 * Функция float find_S(float katet_a, float katet_b)
 * находит площадь треугольника по катетам
 */
float find_S(float katet_a, float katet_b)
{
    return 0.5 * (katet_a * katet_b);
}



int main()
{
    float a, b, c, angle_A, angle_B, S;
    printf("Введите гипотенузу c: ");
    scanf("%f", &c);
    printf("Введите прилежащий угол альфа (в градусах): ");
    scanf("%f", &angle_A);
    a = find_katet_a(angle_A, c);
    b = find_katet_b(angle_A, c);
    angle_B = find_angle_B(angle_A);
    S = find_S(a, b);
    printf("Катет а = %f\n", a);
    printf("Катет b = %f\n", b);
    printf("Угол бета = %f\n", angle_B);
    printf("Площадь треугольника: %f\n", S);

    return 0;
}

