#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y; //две точки по оси X и оси Y
    scanf("%d%d", &x, &y);
    //Каскадное ветвление
    if(y > 0 && x > 0)
        printf("1-я четверть\n");
    else if (y > 0 && x < 0)
        printf("2-я четверть\n");
    else if(y < 0 && x < 0)
        printf("3-я четверть\n");
    else if(y < 0 && x > 0)
        printf("4-я четверть\n");
    else
        printf("Точка находится на осях\n");

    return 0;
}
