#include <stdio.h>
#include <stdlib.h>


#define ARRAY_SIZE 2

typedef struct {
float width;
float height;
float length; //in meters
char *title;
char *color;
} Furniture;

int main()
{
    Furniture bookshelf;
    bookshelf.width = 0.59;
    bookshelf.height = 2.30;
    bookshelf.length = 0.79;
    bookshelf.title = "Шкаф для одежды";
    bookshelf.color = "Дуб";
    printf("Название\t\tГлубина\tВысота\tШирина\tЦвет\n\n");
    printf("%s\t\t", bookshelf.title);
    printf("%.2f\t", bookshelf.width);
    printf("%.2f\t", bookshelf.height);
    printf("%.2f\t", bookshelf.length);
    printf(" %s\n", bookshelf.color);
    Furniture room[ARRAY_SIZE];
    room[0].width = 0.40;
    room[0].height = 0.90;
    room[0].length = 0.90;
    room[0].title = "Комод";
    room[0].color = "Дуб";
    room[1].width = 2.00;
    room[1].height = 0.60;
    room[1].length = 1.40;
    room[1].title = "Кровать";
    room[1].color = "Дуб";
    room[2].width = 0.49;
    room[2].height = 0.9;
    room[2].length = 1.2;
    room[2].title = "Стол";
    room[2].color = "Дуб";
    for (int i = 0; i <= ARRAY_SIZE; i++) {
    printf("%s\t\t\t%.2f\t%.2f\t%.2f\t %s\n", room[i].title, room[i].width, room[i].height, room[i].length, room[i].color);
    }



    return 0;
}
