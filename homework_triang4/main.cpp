#include <iostream>
#include <math.h>

using namespace std;

/*
 * 11. Заданы два катета прямоугольного треугольника a и b. Вычислить площадь
 * S и периметр P .
 */
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

/*
 * float find_S(float a, float b)
 * Ищет площадь прямоугольного треугольника
 */
float find_S(float a, float b) {
    return 0.5*(a*b);
}


int main()
{
    float a, b, c;
    float P, S;

    printf("Введите катеты a, b: ");
    scanf("%f%f", &a, &b);
    //Найдем гипотенузу c
    c = find_hypot(a, b);
    P = find_perimeter(a, b, c);
    S = find_S(a, b);

    printf("Периметр прямоугольного треугольника = %5.2f\n",P);
    printf("Площадь прямоугольного треугольника = %5.2f\n", S);

    return 0;
}

