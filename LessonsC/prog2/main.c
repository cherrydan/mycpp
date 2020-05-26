#include <stdio.h>
#include <stdlib.h>

void print_x(int x)
{
    if (x < 10)
        {
            printf("x = %d\n", x);
        }
    else
        {
            printf("Error!\n");
        }
}

int compare(int a, int b)
{
    if (a > b)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

int main()
{
    int x = 4;
    int y = 3;
    print_x(compare(x, y));

}

