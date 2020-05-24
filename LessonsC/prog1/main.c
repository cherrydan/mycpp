#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    t = 15;
    t = (t - 2) * t + 5;
    float v = 2.54;
    printf("t = %d decimal, t = %x hex\n", t, t);
    printf("%.2f\n", v);
    v = t;
    printf("%g", v);

}
