#include <stdio.h>
#include <stdlib.h>

int main()
{


    int i = 0;
    char step = 0;
    printf("Enter value over 999: ");
    scanf("%d", &i);
    if (i > 100 && i <= 999)
        printf("Value: %d\n", i);
    else
        {
            printf("Value too big or to small!");
            return 1;
        }
    int first = i / 100 % 10;
    int second = i % 100 / 10;
    int third = i % 10;

    int res1 = first * second * third;
    if (res1 != 0)
        {
            printf("%d\n", res1);
            step++;
            first = res1 % 100 / 10;
            second = res1 % 10;
            int res2 = first * second;
            if (res2 != 0)
                {
                    printf("%d\n", res2);
                    step++;
                    first = res2 % 100 /10;
                    second = res2 % 10;
                    int res3 = first * second;
                    if(res3 != 0)
                        {
                            step++;
                            printf("Last step: %d\n", res3);
                        }
                }
        }
    printf("Steps: %d\n", step);
}
