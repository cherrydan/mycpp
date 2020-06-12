#include <stdio.h>
/*перевод кварт в граммы и вычисляем сколько молекул воды в граммах*/


int main()
{
    const int quart = 950;
    const double mol = 3.0e-23;
    int val = 0;
    printf("Введите количество воды в квартах: ");
    scanf("%d", &val);
    if(val > 0 && val <= 10) {
    printf("В %d квартах содержится %d грамм.\n", val, val*quart);
    printf("Молекула воды весит %G грамм\n", mol);
    printf("В %d квартах воды содержится %G молекул воды\n", val, ((double)val*quart)/mol);
    }
    else {
    printf("Введено число >0 или <10\n");
    }
    return 0;
}
