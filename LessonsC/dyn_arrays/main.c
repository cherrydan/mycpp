#include <stdio.h>
#include <stdlib.h>

/*
 Двумерные массивы - обычные и динамические
 Статический двумерный массив
 (Тимофей Хирьянов)
*/

#define MATRIX_HEIGHT   5
#define MATRIX_WIDTH    5

void static_array_print(int A[][MATRIX_WIDTH], size_t N)
{

    for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < MATRIX_WIDTH; j++)
                printf("%*d", MATRIX_WIDTH, A[i][j]);
            printf("\n");
        }
}

void static_array_test(size_t N)
{
    int A[N][MATRIX_WIDTH];
    int x = 1;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < MATRIX_WIDTH; j++)
            {
                A[i][j] = x;
                x++;
            }
    static_array_print(A, N);
    printf("\nПрямой доступ в память:\n");
    for(int *p = (int *)A; p < (int *)A + (MATRIX_HEIGHT*MATRIX_WIDTH); p++)
        printf("%3d", *p);
    printf("\n\n");
}


int main()
{
    static_array_test(MATRIX_HEIGHT);
    return 0;
}
