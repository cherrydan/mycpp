#include <stdio.h>
/*Массивы: сдвиг вправо (Тимофей Хирьянов)*/

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
    //строгая последовтельность действий ноборот
    int tmp = A[N-1];
    for(int i = N-1; i > 0; i--)
        A[i] = A[i-1];
    A[0] = tmp;
    print_array(A);
    return 0;
}
