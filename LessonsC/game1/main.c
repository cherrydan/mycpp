#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int count = 0;
    char mas[10][21]; //игровое поле
    int x = 10, y = 5;
    char key;
    int ox, oy; //переменные, хранящие координаты собаки
    int ax = 5, ay = 3;
    srand(time(NULL)); //включаем генератор случ. чисел для координат яблока
    do
        {

            sprintf(mas[0], "####################"); //создаем игровое поле
            sprintf(mas[9], "####################");
            for(int i = 1; i < 9; i++)
                {
                    sprintf(mas[i], "#                  #");
                }
            mas[y][x] = '@'; //создаем собаку
            mas[ay][ax] = '*'; //создаем яблоко
            system("clear");
            for(int i = 0; i < 10; i++)
                {
                    printf("%s\n", mas[i]);
                }
            printf("Яблок собрано: %d\n", count);
            //получаем ввод с клавиатуры
            key = getchar();
            ox = x;
            oy = y;
            if (key == 'w')
                y--;
            else if (key == 's')
                y++;
            else if (key == 'a')
                x--;
            else if (key == 'd')
                x++;
            //обрабатываем ввод с клавиатуры

            //проверяем, не достигла ли собака границ игрового поля, если да
            if (mas[y][x] == '#')
                {
                    x = ox; //замораживаем её коорднаты
                    y = oy;
                }
            if((x == ax) && (y == ay))   //если координаты собаки совпали с координатами яблока
                {
//собака съела яблоко, и появляется новое яблоко
                    ax = rand() * 1.0 / RAND_MAX * 18 + 1;
                    ay = rand() * 1.0 / RAND_MAX * 8 + 1;
                    count++;
                }
        }
    while(key != 'e');

    return 0;
}
