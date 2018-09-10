#include <iostream>
#include "pryamoug.hpp"

/*
 * 17. Даны длины сторон прямоугольника a и b. Найти площадь S и периметр P .
 */

using namespace std;

int main()
{
    float a, b, S, P;
    printf("Введите длины сторон прямоугольника (a, b): ");
    scanf("%f%f", &a, &b);
    S = pr_ploshad(a, b);
    P = pr_perimeter(a, b);
    printf("Площадь прямоугольника = %.2f\n", S);
    printf("Периметр прямоугольника = %.2f\n", P);


    return 0;
}

