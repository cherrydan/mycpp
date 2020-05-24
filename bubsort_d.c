/*
 Создаём динамический массив в С, и сортируем его методом пузырька
 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n, i, j;
	int *a; /*Указатель на int - наш будущий динамический массив*/

	printf("Сколько элементов в массиве будет: ");
	scanf("%d",&n);

	/*создаём динамический массив*/
	a = (int *) malloc(sizeof(int)*n);

	printf("Заполним массив значениями:\n");

	for(i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}

	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n - i - 1; j++) {
			if(a[j] > a[j+1]) {
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}

		}
	}

	printf("Отобразим отсортированный массив методом ПУЗЫРЬКА: \n");
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);

	printf("\n");

	free(a);

	return 0;

}