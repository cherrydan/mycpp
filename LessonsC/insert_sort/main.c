#include <stdio.h>
/*
Сортировка вставками (Тимофей Хирьянов)
*/
#define BUFFER_SIZE 1000

int input_array(int A[], int max_size)
{
    int top = 0;
    while(1)
        {
            int x;
            scanf("%d", &x);
//пока не достигнуто максимальное количество элементов, или не введён 0
            if(x == 0 || x == max_size)
                break;
            A[top] = x;
            top++;
        }

    return top;
}

void insert_sort(int A[], int N)
{
    for(int i = 1; i < N; i++)
        {
            int k = i; //сохраняем текущую позицию (курсор)
            while(k > 0 && A[k-1] > A[k]) // пока слева кто-то есть, и тот кто слева ВЫШЕ того кто справа
                {
//меняем значение в позиции A[k] с тем кто в позиции A[k-1]
                    int tmp = A[k-1];
                    A[k-1] = A[k];
                    A[k] = tmp;
                    k--; //сдвигаем позицию левее (курсор)

                }

        }
}

void print_array(int A[], int N)
{
    for(int i = 0; i < N; i++)
        printf("%3d ", A[i]);
    printf("\n");
}

int main()
{
    int A[BUFFER_SIZE];
    int N;
    printf("Введите числа: ");
    N = input_array(A, BUFFER_SIZE);
    insert_sort(A, N);
    print_array(A, N);
    return 0;
}
