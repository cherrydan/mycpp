#include <stdio.h>
/*дюймы в см или наоборот*/
#define INCH 2.54

float inch_to_sm(float inch) {
return inch*INCH;
}

float sm_to_inch(float sm) {
return sm / INCH;
}

int main()
{
    float val = 0.0;
    printf("Выберите действие:\n");
    printf("\t\t 1. Из дюймов в см.\n");
    printf("\t\t 2. Из см. в дюймы ");
    char ch = getc(stdin);
    if(ch == '1') {
    printf("Введите длину в дюймах (типа 13.5): ");
    scanf("%f", &val);
    printf("В %g дюймах = %g сантиметров\n", val, inch_to_sm(val));
    }
    else if(ch == '2') {
    printf("Введите длину в см. (типа 13.5): ");
    scanf("%f", &val);
    printf("В %g см. = %g дюймов\n", val, sm_to_inch(val));
    }


    return 0;
}
