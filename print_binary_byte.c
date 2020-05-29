// Вывод байта в двоичном виде
#include <stdio.h>

typedef unsigned char byte;

int main()
{
    byte b = 0;  // Или любое другое
    printf("Введите число от 0 до 255: ");
    scanf("%d", &b);
    for (int i = 0; i < 8; i++)
        {
            printf("%c", (b & 0x80) ? '1' : '0');
            b <<= 1;
        }
    printf("\n");
    return 0;
}
