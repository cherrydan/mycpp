#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = NULL;
    x = malloc(sizeof(int));
    if (x != NULL)
        {
            *x = 333;
            printf("%d\n", *x);
        }
    free(x);
    x = NULL;

    return 0;
}
