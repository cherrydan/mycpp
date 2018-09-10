#include <iostream>
#include <math.h>

/*
 * Задание.
 * 10. Точки A и B заданы координатами на плоскости: A(x 1 , y 1 ), B(x 2 , y 2 ). Найти
 * длину отрезка AB.
 */

using namespace std;

struct point {
    float x;
    float y;
};

float otrezok(float x1, float y1, float x2, float y2)
{
    float result;
    result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    return result;
}

int main()
{
    point A, B;
    float L;
    printf("Введите координаты (x, y) отрезка A: ");
    scanf("%f%f", &A.x, &A.y);
    printf("Введите координаты (x,y) отрезка B: ");
    scanf("%f%f",&B.x, &B.y);
    L = otrezok(A.x, A.y, B.x, B.y);
    printf("Длина отрезка AB = %5.3f\n", L);

    return 0;
}

