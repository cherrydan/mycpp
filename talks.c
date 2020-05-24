/*
 *
 *
 *
 * Написать программу, вычисляющую стоимость  междугороднего разговора в зависимости от кода города. ( Москва(905) - 4.15руб. Ростов(194) - 1.98руб. Краснодар(491) - 2.69руб. 
 * Киров(800) -  5.00руб. ). Программа принимает от пользователя длительность разговора в минутах и код города.
 * 
 */

#include <stdio.h>

const float MSK = 4.15;
const float ROS = 1.98;
const float KRA = 2.69;
const float KIR = 5.00;

int main() {

	int minutes, code;
	float sum;
	char* cities[4] = {"МОСКВА", "РОСТОВ", "КРАС-ДАР", "КИРОВ"};
	int codes[4] = {905, 194, 491, 800};
	printf("МЕЖДУГОРОДНЫЙ ПЕРЕГОВОРНЫЙ ПУНКТ\n");
	printf("Город:        Код:\n");
	for(int i = 0; i <= 1; i++) {
		printf("%s        %d\n",cities[i],codes[i]);
	}
	printf("%s      %d\n",cities[2],codes[2]);
	printf("%s         %d\n",cities[3],codes[3]);
	printf("Введите код города и количество минут, разделяя пробелом: ");
	scanf("%d %d", &code, &minutes);

	switch(code) {
		case 905: 
		sum = minutes * MSK;
		break;

		case 194:
		sum = minutes * ROS;
		break;

		case 491:
		sum = minutes * KRA;
		break;

		case 800:
		sum = minutes * KIR;
		break;

		default:
		sum = -1;

	}

	if(sum == -1) {
		printf("Введен неверный код города!");
	}
	else
		printf("Ваш разговор длился %d мин. Стоимость %3.2f руб.\n",
			minutes,sum);

	return 0;
} 