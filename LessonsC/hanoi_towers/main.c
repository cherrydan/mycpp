#include <stdio.h>
/*
 решение задачи о ханойских башнях, рекурсивное решение
 (с) Тимофей Хирьянов
 */
void hanoi(int n, int i, int k);

int main()
{
    hanoi(3,1,2);
    return 0;
}

void hanoi(int n, int i, int k)
{
    if(n == 1)
        printf("Перемещаем диск 1 со стержня %d на стержень %d\n", i, k);
    else
        {
            int tmp = 6 - i - k;
            hanoi(n-1, i, tmp);
            printf("Перемещаем диск %d со стержня %d на стержень %d\n",n, i, k);
            hanoi(n-1, tmp, k);
        }
}
