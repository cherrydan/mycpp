#include <stdio.h>
#include <math.h>

float pifagor(float a, float b)
{
    return sqrt((a*a) + (b*b));
}

int main()
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);

    c = pifagor(a, b);
    printf("Теорема Пифагора: a = %.2f b = %.2f\n", a,b);
    printf("Результат: %.2f\n", c);

    return 0;
}
