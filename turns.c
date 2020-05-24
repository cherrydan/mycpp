/*
 Функция turns выдаёт количество попыток, за которое будет угадано число n в заданном диапазоне
 low high
 */

#include <stdio.h>

int turns(int n, int low, int high);

int turns (int n, int low, int high) 
{
	int turns = 0;
	// Продолжаем, пока имеется число для угадывания
	while (high >= low) {
		turns++;
		int mid = (low + high)/2;
		if (mid == n) {
		return turns;
		} 	
		else if (mid < n) {
		low = mid + 1;
		} 
		else {
		high = mid - 1;
			}
		}
	return turns;
} 


int main() 
{
	int n;
	int high;

	printf("Введите число для угадывания: ");
	scanf("%d", &n);

	printf("Введите вернюю границу диапазона чисел: ");
	scanf("%d", &high);

	printf("Число: %d\nВерхняя граница диапазона: %d\nКоличество попыток для угадывания: %d\n", n, high, turns(n, 1, high));

	return 0;
}