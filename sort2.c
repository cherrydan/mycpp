/*
 *
 *
 * Пробуем встроенную в Си функцию быстрой сортировки

 */

 #include <stdio.h>
 #include <stdlib.h>
 #define ARRAY_SIZE 5

 /*
 Сначала нам нужно написать функцию, сравнивающую два элемента массива
 */
 int cmp(const void *a, const void *b) {
     return *(int*)a - *(int*)b; //меняя местами b и a, мы меняем направление сортировки
 }



 int main() {

	 int my_list[ARRAY_SIZE] = { 23, 53, 47, 588, 6 };
	 printf("Исходный массив my_list: ");
	 for(int i = 0; i < ARRAY_SIZE; i++) {
		 printf(" %d ", my_list[i]);
	 }
	 /*
	 Первый параметр - сам массив
	 Второй - длина массива
	 Третий - размер элемента массива
	 Четвертый - функция, которая сравнивает два элемента массива
	 */
	 qsort(my_list, ARRAY_SIZE, sizeof(int), cmp);
	 /*Пересортированным остается все тот же массив my_list*/
	 printf("\nОтсортированный массив my_list: ");

	 for(int i = 0; i < ARRAY_SIZE; i++) {
		 printf(" %d ", my_list[i]);
	 }
	 printf("\n");


 }

