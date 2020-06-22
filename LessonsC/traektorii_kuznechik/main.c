#include <stdio.h>
/*
 Траектории кузнечика
 (Тимофей Хирьянов
*/
int number_of_trajectories(int n)
{
    int K[n+1];
    K[0] = 0;
    K[1] = 1;
    for(int i = 2; i <= n; i++)
        K[i] = K[i-1] + K[i - 2];
    return K[n];
}



int main()
{
    int finish;
    scanf("%d", &finish);
    printf("Кузнечик имеет %d траекторий из 1 в %d\n", number_of_trajectories(finish), finish);
    return 0;
}
