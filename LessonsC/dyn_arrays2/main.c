#include <stdio.h>
#include <stdlib.h>

/*
 Двумерные массивы - обычные и динамические
 Динамический двумерный массив
 (Тимофей Хирьянов)
*/

//Выделение памяти двумерному массиву по Т. Н. Дербышевой
// (старший  преп. кафедры информатики МФТИ
int **dynamic_array_alloc(size_t, size_t);
//тестовый прогон матрицы
void dynamic_array_test(size_t, size_t);
//вывод матрицы
void dynamic_array_print(int **, size_t, size_t);
//Освобождение памяти
void dynamic_array_free(int **);

int main()
{
    int M, N;
    printf("N = ");
    scanf("%d", &N);
    printf("M = ");
    scanf("%d", &M);

    dynamic_array_test(N, M);
    return 0;
}


int **dynamic_array_alloc(size_t M, size_t N)
{
    int **A = (int **)malloc(N*sizeof(int *) + N*M*sizeof(int)); //выделяем память для всего массива N*M
    //проверяем, выделена ли нам память
    if(A != NULL)
        {
            int *start = (int *)((char *)A + N*sizeof(int *)); //курсор который занимает 1 байт и будет пробегать по всем адресам
            //проверяем создан ли курсор
            if(start != NULL)
                {
                    //заполняем массив значениями
                    for(int i = 0; i < N; i++)
                        A[i] = start + i * M;

                }
            else
                printf("Ошибка при создании курсора!\n");
        }
    else
        printf("Ошибка выделения памяти под массив!\n");

    return A;
}


void dynamic_array_test(size_t N, size_t M)
{

    int **A = dynamic_array_alloc(N, M);
    int x = 1;
    for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
                {
                    A[i][j] = x;
                    x++;
                }
        }

    dynamic_array_print(A, N, M);

}

void dynamic_array_print(int **A, size_t N, size_t M)
{
    for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
                {
                    printf("%*d", 5, A[i][j]);
                }
            printf("\n");
        }
}


void dynamic_array_free(int **A)
{
    free(A);
}
