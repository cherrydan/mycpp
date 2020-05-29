/*
 Лекции Тимофея Хирьянова по Си
 МФТИ, 2018
 Переполнение на интах.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int8_t x = 127;
    x++; //переполнились
    x *= 2; //доумножались
    printf("%d\n", x);

    return 0;
}
