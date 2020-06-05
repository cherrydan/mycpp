#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime_number(int x)
{
    for(int divisor = 2; divisor*divisor <= x; ++divisor)
        if(x % divisor == 0)
            return false;
    return true;
}

int main()
{
    int x;
    printf("Введите число, для проверки на простое/или не простое: ");
    scanf("%d", &x);


    if(is_prime_number(x))
        printf("Число %d простое!\n", x);
    else
        printf("Число %d не простое.\n", x);

    return 0;
}
