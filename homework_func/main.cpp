#include <iostream>
#include <math.h>

/* 14.
 * Найти значение функции y = 4 · (x + 1) 3 + 5 · (x − 1) 5 + 2
 */



using namespace std;

int main()
{
    float x, y;
    printf("Введите число x: ");
    scanf("%f", &x);
    y = 4 * pow((x+1),3) + 5 * pow((x-1),5) + 2;
    printf("y = %.5f\n", y);



    return 0;
}

