#include <stdio.h>

/*
    Передача параметра в функцию как указателя
    (Тимофей Хирьянов)
*/

int y = 999; //глобальная переменная для возврата её указателя

void readonly_a(int a)
{
    printf("Получено a = %d\n", a);
    a += 10;
    printf("Стало a = %d\n", a);
}

void write_p(int *p)
{

    printf("Получено *p = %d\n", *p);
    *p += 10;
    printf("Стало *p = %d\n", *p);

}

int *returns_pointer()
{

    printf("y в функции returns_pointer %d\n", y);
    return &y;
}

int main()
{
    int x = 7;
    printf("x из функции main() = %d\n", x);
    readonly_a(x);
    printf("x после выхода из функции readonly_a = %d\n\n",x);
    printf("x из функции main() = %d\n", x);
    write_p(&x);
    printf("x после выхода из функции readonly_a = %d\n",x);
    int *z = returns_pointer();
    printf("*z из функции returns_pointer() = %d", *z);
    return 0;
}
