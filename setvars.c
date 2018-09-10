/*
 *
 * Функция scanf из стандартной библиотеки С для считывания данных с консоли
 * 
 * Стандартная библиотека функций ввода-вывода stdio.h предоставляет
 * функцию scanf(), которая может использоваться для получения данных
 * от пользователя. Функция scanf() требует, чтобы в нее передавали два
 * аргумента, определяющие тип данных и место, где они должны быть
 * сохранены.
 * Функция scanf() может назначать значения нескольким переменным од-
 * новременно. Для этого в первый аргумент помещается несколько спе-
 * ци фикаторов формата, разделенных пробелами, а весь список должен
 * располагаться в двойных кавычках. Второй аргумент должен содержать
 * разделенный запятыми список имен переменных, перед каждым из ко-
 * торых следует поставить операция адресации &. Имена переменных
 * следует располагать соответственно указанным форматам.
 * (Майк МакГрат. "С-программирование для начинающих", стр. 26)
 */

#include <stdio.h>

int main() {

	char letter;

	int num1, num2;

	printf("Введите любой символ с клавиатуры: ");
	scanf("%c", &letter);
	printf("Введите два целых числа, разделенных пробелом: ");
	scanf("%d %d", &num1, &num2);

	printf("Введенные целые: %d %d\n", num1, num2);
	printf("Введенный символ: %c\n",letter);
	printf("Адрес памяти в котором сохранен введенный символ: \t%p\n", &letter);
	printf("Адреса памяти в которых сохранены введенные целые: \t%p:%p",&num1,&num2);

	return 0;
 }
