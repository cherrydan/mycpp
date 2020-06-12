#include <stdio.h>
/*работаем с экспоненциальной записью*/

int main()
{
    const double yearSec = 3.156E7; //год в секундах
    double res = 0.0;
    int age = 0;
    printf("Введите возраст в годах: ");
    scanf("%d", &age);

    res = (double)age * yearSec;
    printf("Вы прожили на свете %E секунд!", res);

    return 0;
}
