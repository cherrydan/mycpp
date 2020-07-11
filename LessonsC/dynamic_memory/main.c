#include <stdio.h>
#include <stdlib.h>

/*
 Выделение и освобождение динамической памяти
 (Тимофей Хирьянов)
*/


int main()
{
    printf("Введите размер массива, который вы хотите создать: ");
    int N;
    scanf("%d", &N);

    char *A = malloc(N);
    if (A == NULL)
        {
            printf("Система не дала столько памяти!\n");
        }
    for(int i = 0; i < N; i++)
        A[i] = i;

    printf("Массив создан успешно!\n");

    //system("pause");
    return 0;
}
