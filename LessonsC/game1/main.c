#include <stdio.h>
#include <stdlib.h>

int main()
{

    char mas[10][21];
    int x = 10, y = 5;
    char key;
    do
        {

            sprintf(mas[0], "####################");
            sprintf(mas[9], "####################");
            for(int i = 1; i < 9; i++)
                {
                    sprintf(mas[i], "#                  #");
                }
            mas[y][x] = '@';
            system("clear");
            for(int i = 0; i < 10; i++)
                {
                    printf("%s\n", mas[i]);
                }

            key = getchar();

            switch(key)
                {
                    case 'w':
                        y--;
                        break;
                    case 's':
                        y++;
                        break;
                    case 'a':
                        x--;
                        break;
                    case 'd':
                        x++;
                        break;
                }
        }
    while(key != 'e');

    return 0;
}
