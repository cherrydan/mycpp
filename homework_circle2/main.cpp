#include <iostream>
#include <math.h>

using namespace std;


const float PI = 3.1415926535; //Число пи нам пригодится

/*
 * ЗАДАНИЕ
 * Дана длина окружности L. Найти радиус окружности R и площадь круга S.
 */


/*
 * Функция find_radius возвращает радиус окружности при заданной длине
 */
float find_radius(float l) {
    return l / 2 * PI;

}


/*
 * Функция find_S возвращает площадь круга по радиусу
 */
float find_S(float radius) {
    return PI * (radius * radius);
}


int main()
{
    float L;
    float R, S;
    printf("Введите длину окружности L: ");
    scanf("%f",&L);
    R = find_radius(L);
    S = find_S(R);
    printf("Радиус окружности: %5.2f\nПлощадь круга: %5.2f\n",R,S);
    return 0;
}

