#include <stdio.h>
/*Массивы: сдвиг влево (Тимофей Хирьянов)*/

#define N 10

void print_array(int arr[])
{
    for(int i = 0; i < N; i++)
        printf("%3d ", arr[i]);
    printf("\n");
}


int main()
{
    int A[N] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    print_array(A);
    int tmp = A[0];
    for(int i = 0; i < N-1; i++)
        A[i] = A[i+1];
    A[N-1] = tmp;
    print_array(A);
    return 0;
}
