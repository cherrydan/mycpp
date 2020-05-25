/*
 *
 * Dysplays sum of natural values with recursion
 *
 */
#include <stdio.h>
#include <stdlib.h>

int recursion(int n)
{

    if (n == 0)
        {
            return n;
        }
/* n - 1 this is cycle counter */
    return recursion(n - 1) + n;

}

int main()
{
    printf("=> %d", recursion(3));
    printf("\n");
    return 0;
}
