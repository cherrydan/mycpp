#include <stdio.h>
#include <stdbool.h>
/*индуктивные последовательности: any, any of*/
int main()
{
    int n;
    scanf("%d", &n);

    bool any = false;
    bool all = true;
    while(n)
        {
            int digit = n % 10;
            any = any || (digit < 5); //одно число соответствующее условию
            all = all && (digit < 5);  //все числа соответствующие условию
            n /= 10;
        }
    printf("any = %d\n all = %d\n", any, all);
    return 0;
}
