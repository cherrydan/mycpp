/*
 *
 * Существует много разных способов для написания одной и той же программы. Видоизменим нашу программу преобразования температур:
 * #include ‹stdio.h›
 * печать таблицы температур по Фаренгейту и Цельсию 
 * main()
 * {
 * int fahr;
 * for (fahr = 0; fahr ‹= 300; fahr = fahr + 20)
 * printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 * }
 * Эта программа печатает тот же результат, но выглядит она, несомненно, по-другому.
 * 
 * Упражнение 1.5. Измените программу преобразования температур так, 
 * чтобы она печатала таблицу в обратном порядке, т. е. от 300 до 0
 * 
 * (Керниган. Ритчи. Язык программирования С. стр. 25)
*/

#include <stdio.h>

int main() {
	int fahr;
	
	for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
	
	return 0;
}



