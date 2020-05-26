#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    int oper;
    printf("Input x = ");
    scanf("%f", &x);
    printf("Input y = ");
    scanf("%f", &y);
    printf("Select operation:\n\t1-for multiplication,\n\t2-for addition\n");
    printf("\t3-for division\n\t4-for substraction ");
    scanf("%d", &oper);
    if (oper == 1)
        {
            printf("x * y = %.3f\n", x * y);
        }
    if (oper == 2)
        {
            printf("x + y = %.3f\n", x + y);
        }
    if (oper == 3)
        {
            printf("x / y = %.3f", x / y);
        }
    if (oper == 4)
        {
            printf("x - y = %.3f", x - y);
        }

    return 0;
}
