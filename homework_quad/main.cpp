#include <iostream>
#include <math.h> //Для функции sqrt
#include <stdio.h> //Ввод-вывод в стиле C

using namespace std;

/*
 * Итак.
 * ЗАДАНИЕ
 * Известна диагональ квадрата d. Вычислить площадь S и периметр P квад-
 * рата.
 */


/*
 * Формула площади квадрата по диагонали d
 * S = (d * d) / 2;
 */
float find_S(float d)
{
    return (d * d) / 2;
}

/*
 *Формула стороны квадрата
 * a = d / (sqrt(2));
 */
float find_side(float d)
{
    return d / sqrt(2);
}



/*
 * Формула периметра квадрата
 * P = a * 4;
 */
float find_P(float a)
{
    return a * 4;
}



int main()
{
    float d, S;
    printf("Введите диагональ квадрата: ");
    scanf("%f", &d);
    S = find_S(d);
    printf("Площадь квадрата = %5.1f см2\n", S);
    printf("Длина стороны квадрата = %5.2f см.\n", find_side(d));
    printf("Периметр квадрата = %5.1f см.\n", find_P(find_side(d)));

    return 0;
}

