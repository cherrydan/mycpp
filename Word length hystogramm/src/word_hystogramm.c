/*
 * word_hystogramm.c
 *
 *  Created on: 30.06.2017
 *      Author: Керниган и Ритчи
 *      Напишите программу, которая выводила бы длину введенных слов в виде гистограммы
 *
 */



#include <stdio.h>
main ()
{
    int length, i;
    char c;
    i = length = 0;
    while ((c=getchar()) != EOF)
        if (c != ' ')
            ++length;
            else
            {
                if (c != '\n')
                {
                for (i=0; i < length; ++i)
                    printf("#");
                printf("\n");
                length = 0;
                }
                else
                {
                    for (i=0; i < length; ++i)
                        printf("#");
                }
            }
}
