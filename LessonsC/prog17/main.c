#include <stdio.h>
#include <stdlib.h>

void freeAndNull(int **p)
{

    if (*p != NULL)
        {
            free(*p);
            *p = NULL;

        }

}

void createInt(int **p)
{

    *p = malloc(sizeof(int));


}
int main()
{
    int *a;
    createInt(&a);
    if (a != NULL)
        {
            *a = 777;
            printf("%d\n", *a);
            freeAndNull(&a);
        }
    return 0;
}
