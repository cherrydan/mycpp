#include <stdio.h>
#include <stdlib.h>



int main()
{
    for(int x = 2; x <= 18; x+=2) //Выводим чётные числа от 2 до 18 при помощи for
        {
            printf("%d\n",x);
        }
    printf("\n");
    int k = 2;

    while(k <= 18) //Тоже самое при помощи while
        {
            printf("%d\n", k);
            k+=2;
        }
    printf("\n");
    k = 2;
    do //наконец то же при помощи do while
        {
            printf("%d\n", k);
            k+=2;
        }
    while(k <= 18);
    printf("\n\n");
    const int MAX = 8; //создаём массив из 8 элементов
    char str[MAX];
    for(int j = 0; j <= MAX; j++) //при помощи цикла for заполняем его ###
        {
            str[j] = '#';
            if (j == MAX) //последний элемент будет символом конца строки
                {
                    str[j] = '\0';
                }
        }
    printf("Выведен массив символов как строка при помощи printf: %s\n", str); //выводим созданые массив как строку printf-ом
    k = 0;
    printf("Выведено при помощи putc(char, stdout): ");
    while(str[k] != '\0')
        {
            putc(str[k], stdout); //и при помощи putc
            k++;
        }
    printf("\n");

    return 0;
}
