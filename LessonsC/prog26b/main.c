#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    домашнее задание по switch без switch, инициализация генератора случайных чисел текущим временем
    Потом делаем так, чтобы совет выдавался только один раз в день
*/


int main()
{
    time_t second;
    second = time(NULL);

    //преобразуем полученое время в секундах в структуру tm
    struct tm *datetime;
    datetime = localtime(&second);


    srand(datetime->tm_mday);
    int choice = rand() % 5;
    if(choice == 0) printf("The Painted Veil\n");
    else if(choice == 1) printf("Whiplash\n");
    else if(choice == 2) printf("What happens in Vegas?\n");
    else if(choice == 3) printf("The Game\n");
    else if(choice == 4) printf("Mandariinid\n");
    else printf("ERROR\n");

    return 0;
}
