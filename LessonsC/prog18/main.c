#include <stdio.h>
/*Индуктивные последовательности*/
void x_plus1(int );
void x_plus_digit(int );
void x_mult_digit(int );

int main()
{
    int x = 0;

    printf("Введите желаемый тип последовательности:\n");
    printf("\t\t\t 1. Подсчёт\n");
    printf("\t\t\t 2. Сумма\n");
    printf("\t\t\t 3. Произведение => ");
    char choice = getchar();
    if (choice == '1')
        {
            printf("Введите x = ");
            scanf("%d", &x);
            x_plus1(x);
        }
    else if(choice == '2')
        {
            printf("Введите x = ");
            scanf("%d", &x);
            x_plus_digit(x);
        }
    else if(choice == '3')
        {
            printf("Введите x = ");
            scanf("%d", &x);
            x_mult_digit(x);
        }
    else
        {
            printf("Неверный выбор! Bye!");
            return -1;
        }




    return 0;
}

void x_plus1(int x)
{
    int n = 0;
    while(x % 10)
        {
            n += 1;
            x/=10;
        }
    printf("Подсчёт: %d\n",n);

}

void x_plus_digit(int x)
{
    int n = 0;
    while(x)
        {
            int digit = x%10;
            n += digit;
            x/=10;

        }
    printf("Сумма: %d\n",n);

}

void x_mult_digit(int x)
{
    int n = 1;
    while(x)
        {
            int digit = x%10;
            n *= digit;
            x /= 10;
        }
    printf("Произведение: %d\n",n);

}
