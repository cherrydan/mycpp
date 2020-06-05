#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *mas = NULL;
    int cnt = 0;
    printf("Введите размер массива ");
    scanf("%d", &cnt);
    //Выделение памяти под динамический массив
    mas = malloc(sizeof(int)*cnt);
    if (mas != NULL)
        {
            mas[0] = 2;
            printf("%d\n", mas[0]);
            for(int i = 1; i <= cnt; i++)
                {
                    mas[i] = mas[i-1] * 2;
                    printf("%d\n", mas[i]);
                }
            printf("\n");
            //Выводим адреса ячеек массива, между ними - 4 байта
            for(int i = 0; i < cnt; i++)
                {
                    printf("Адрес: %p\n", mas+i);
                }
        }
    free(mas);
    mas = NULL;

    return 0;
}
