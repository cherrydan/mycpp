#include <stdio.h>

void print_number_factors(int x)
{
    printf("Делители: ");
    int divisor = 2;
    while(x != 1)
        {
            if (x%divisor == 0)
                {
                    printf("%d ", divisor);
                    x /= divisor;
                }
            else
                divisor++;
        }
    printf("\n");
}

int main()
{
    int x;
    printf("Введите X для поиска его множителей: ");
    scanf("%d", &x);
    print_number_factors(x);
    return 0;
}
