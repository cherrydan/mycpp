#include <stdio.h>
/*индуктивная последовательность: поиск максимума*/

int main()
{
    int x, i = 0;
    int m = -1000000, max_i;
    scanf("%d", &x);
    while(x != 0)
        {
            if(x % 2 == 0) //учитываем только чётные числа
                if(x > m)
                    {
                        m = x;
                        max_i = i;
                    }
            i += 1;
            scanf("%d", &x);

        }
    printf("Максимум среди чётных: %d\n", m);
    printf("Позиция максимума (от ноля): %d\n", max_i);
    return 0;
}
