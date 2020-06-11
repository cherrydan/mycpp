#include <stdio.h>
/* Копирование массива, реверс (Тимофей Хирьянов)*/
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
    //реверс, проходим только половину цикла
    for(int i = 0; i < N/2; i++)
        {
            int tmp = A[i];
            A[i] = A[N-1-i];
            A[N-1-i] = tmp;
        }

    print_array(A);

    return 0;
}
