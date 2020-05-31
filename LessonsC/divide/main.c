#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 248;
    int res = 1;
    printf("Число целиком: %d\n", x);

    //получаем разряды числа
    while(x != 0){
    res*= x % 10;
    x /= 10;
    }
    printf("Перемноженые разряды: %d\n", res);
    return 0;
}
