#include <iostream>
#include <math.h> //Для функции sqrt
#include <stdio.h> //Для форматированного ввода-вывода в Си-стиле

/*
 * Итак.
 * ЗАДАНИЕ.
 * Даны катеты прямоугольного треугольника a и b. Найти гипотенузу c и углы треугольника α, β.
 * Все вводимые данные - вещественные числа
 */


using namespace std;

const float PI = 3.1415926535; //Число пи нам пригодится

/*
 * функция float find_hypot(float a, b) = находит гипотенузу с по теореме Пифагора
 *
 */

float find_hypot(float a, float b)
{
    return sqrt((a * a) + (b * b));
}

/*
 * функция float find_angle_a(float a, float c) = находит угол альфа в виде вещественного числа
 *
 */
float find_angle_a(float a, float c)
{
    return a / c;
}

/*
 * функция float a_angle_to_grad(float A) = преобразовывает вещественное число угла альфа в градусы
 *
 */
float a_angle_to_grad(float A)
{
    return  A * 180 / PI;
}

/*
 * функция float find_angle_b(float angle_a) = находит угол бета в градусах
 *
 */
float find_angle_b(float angle_a)
{
    return 180 - 90 - angle_a;
}

int main()
{

    /*
     * Нам понадобятся формулы:
     * 1) Вычислить гипотенузу c:
     * c = sqrt((a*a) + (b*b));
     * 2) вычислить угол A:
     * A = a / c;
     * 3) преобразовать угол А в градусы:
     * A_grad = A*180/Pi; //Pi сделать константой и равным 3,1415926535
     * 4) вычислить угол B_grad:
     * B_grad = 180 - 90 - A_grad;
     *
     * БИНГО!
     */
    float a, b, c, A, B;
    printf("Введите катет а = ");
    scanf("%f", &a);
    printf("Введите катет b = ");
    scanf("%f", &b);
    c = find_hypot(a, b);
    printf("Гипотенуза равна: %f\n", c);

    printf("Вычисляем угол альфа: ");
    A = a_angle_to_grad(find_angle_a(a, c));
    printf("A = %f град.\n", A);
    printf("Вычисляем угол бета: ");
    B = find_angle_b(A);
    printf("B = %f град.\n", B);

    return 0;


}

