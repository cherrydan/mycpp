#include <stdio.h>

#define N 16

/*заполнение массива (Тимофей Хирьянов)*/
int main()
{
    //способ проинициализировать массив
    int A[N] = {0}; //в массив уйдут одни нули
    for(int i = 0; i < N/2; i++)
        {
            A[2*i] = i;
            A[2*i+1] = N/2+i;
        }

    for(int i = 0; i < N; i++)
        printf(" %d ", A[i]);

    return 0;
}
