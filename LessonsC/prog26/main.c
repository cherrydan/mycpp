#include <stdio.h>
/*тернарный оператор и рекурсия*/

int my_pow(int x, int y) {
if(y < 1) return 1;
return x * my_pow(x, y-1);
}
int main()
{
    int i = 0;
    scanf("%d",&i);
    //составной тернатный оператор (я писал и без скобок)
    i = i < 10 ? 10 : (i > 100 ? 100 : i+1000);
    printf("%d\n", i);
    int x = 2, y = 5;
    printf("%d в степени %d = %d\n", x, y, my_pow(x,y));
    return 0;
}
