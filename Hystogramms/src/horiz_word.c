/*
 * horiz_word.c
 *  Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.
 *  Created on: 15.08.2017
 *      Author: Nikolay Markin
 */

#include <stdio.h>

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
        /* ограничим длину слова в 10 символов */
        int c, state, i, nc, ndigit[11], j;
        state = OUT;
        nc = 0;

        /* заполняем массив нолями */
        for (i = 0; i < 11; ++i)
                ndigit[i] = 0;

        while ((c = getchar()) != EOF)
        {
                ++nc;                          /* новый символ */

                if (c == ' ' || c == '\n' || c == '\t')
                {
                        state = OUT;            /* конец слова */
                        /* символ разделитель не принадлежит слову */
                        --nc;
                        if (nc <= 10)  /* проверка длины слова */
                                ++ndigit[nc];/* прирост гистрограммы */
                        nc = 0; /* сбрасываем счетчик символов */
                }

                else if (state == OUT)
                {
                        state = IN;            /* начало слова */
                }
        }

        /* Печать горизонтальной гистрограммы длин слов */

        /* Внешний цикл. Проход по массиву ndigit[11] сверху вниз,
         * от ndigit[1] до ndigit[10].
         * Слово - минимум один символ. Поэтому цикл начинаем с единицы,
         * не интересует нулевая позиция в массиве.
         * Ограничение цикла - 10. Из условия ограничения
         * длины слова в 10 символов */

        for (i = 1; i < 11; ++i)
        {
                /* вывод параметров гистрограммы - длин (от 1 до 10) */
                printf("Символов в слове: %d ", i);
                /* Внутренний цикл. Обработка конкретного элемента
                 * массива и вывод гистрограммы длин слов.
                 * Слово - минимум символ. Начинаем со значения единицы.
                 * Ограничением цикла может быть только значение ndigit -
                 * количество слов определенной длины.
                 * А в роли значения длины выступает индекс i */

                for (j = 1; j <= ndigit[i]; ++j)
                        printf("#");
                printf("\n");
        }

        return 0;
}
