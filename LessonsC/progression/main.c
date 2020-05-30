#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, stop, step;
    printf("Генератор прогрессий.\nВведите начальное, конечное значения и шаг: ");
    scanf("%d%d%d", &start, &stop, &step);
    int x = start;
    //так этот генератор выглядит не универсально работающим
    //исправляем это. Берём знак от нашего шага step
    int sign = (step > 0) ? +1 : -1;
    //домножаем полученый знак на x и на step
    while(sign*x < sign*stop)
        {
            printf("x = %d\n", x);
            x += step;
        }
    printf("После цикла: x = %d\n", x);
    return 0;
}
