#include <stdio.h>
/* Стек на Си (Тимофей Хирьянов)*/
#define N 100 //размер буфера для кол-ва делителей

int get_number_factors(int x, int A[])
{
    int top = 0;
    int divisor = 2;
    while(x != 1)
        {
            while(x % divisor == 0)
                {
                    A[top] = divisor;
                    top++;
                    x /= divisor;
                }
            divisor++;
        }
    return top;
}

int main()
{
    printf("Введите число для разложения на делители: ");
    int x;
    scanf("%d", &x);
    int A[N];
    int n;
    n = get_number_factors(x, A);
    for(int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
