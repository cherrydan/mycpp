/*
 *
 * В случае, когда в программе требуется использовать константное значе-
 *  ние , которое никогда не изменится, оно должно быть объявлено точно
 * так же, как и обычная переменная, но с использованием в объявлении
 * ключевого слова const.
 *
 *
*/

#include <stdio.h>

int main() {

const float PI = 3.141593;

float diameter, radius, circ, area;

printf("Введите диаметр окружности в миллиметрах:");
scanf("%f", &diameter);

circ = PI * diameter;
radius = diameter / 2;
area = PI * (radius * radius);
//выводим два знака после точки
printf("\n\t Длина окружности: %.2f мм.", circ);
printf("\n\t и площадь окружности %.2f мм.2", area);
printf("\n");

return 0;
}






