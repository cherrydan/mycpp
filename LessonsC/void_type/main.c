#include <stdio.h>
#include <stdlib.h>

/*
    Указатель на void и интерпретация данных
    Тимофей Хирьянов
*/

void print_abstract(void *p, int marker);
int main()
{
    char c = 'Z';
    int i = 430;
    float f = 2.54;
    double d = -32;
    printf("Размер типа char %ld байт\n", sizeof(c));
    printf("Размер типа int %ld байт\n", sizeof(i));
    printf("Размер типа float %ld байт\n", sizeof(f));
    printf("Размер типа double %ld байт\n\n", sizeof(d));

    void *p;
    p = &c;
    print_abstract(p, 1);
    p = &i;
    print_abstract(p, 2);
    p = &f;
    print_abstract(p, 3);
    p = &d;
    print_abstract(p, 4);
    return 0;
}


void print_abstract(void *p, int marker)
{
    if(marker == 1)
        printf("%c\n", *(char*)p); //разыменование указателя на void
    else if (marker == 2)
        printf("%d\n", *(int*)p); //разыменование указателя на void
    else if (marker == 3)
        printf("%f\n", *(float*)p); //разыменование указателя на void
    else if (marker == 4)
        printf("%lf\n", *(double*)p); //разыменование указателя на void
    else
        printf("Error!\n");
}
