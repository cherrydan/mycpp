#include <stdio.h>
#define N 6
/*Задача по информатике на Си ЕГЭ (Тимофей Хирьянов)*/

int main()
{

    int a[N];
    int i, k;

    for(i = 0; i < N; i++)
        scanf("%d",&a[i]);

    k = 0;
    for(i = 0; i < N; i++)
        if(a[i] > 100 && a[i] % 5 == 0)
            k++;
    for(i = 0; i < N; i++)
        if(a[i] > 100 && a[i] % 5 == 0)
            a[i] = k;

    for(i = 0; i < N; i++)
        printf("%d ", a[i]);

    return 0;
}
