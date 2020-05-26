#include <stdio.h>
#include <stdlib.h>
#include "song.h"
int main()
{
    for(int i = 99; i >= 1; i--)
        {
            printf("%d %s пива на стене,\n", i, check_word(i));
            printf("%d %s пива.\n", i, check_word(i));
            printf("Одну стянули мы,\nПустив по кругу.\n");
            if (i == 1)
                {
                    printf("Нет больше пива на стене,\nНет больше пива!\n");
                }
        }
    return 0;
}
