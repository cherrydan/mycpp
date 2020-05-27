#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        {
            if (i <= 4)
                {
                    arr[i] = 777;
                }
            else
                {
                    arr[i] = i * i;
                }
        }

    for (int j = 0; j < 10; j++)
        {
            printf("arr[%d] = %d\n", j, arr[j]);
        }
    return 0;
}
