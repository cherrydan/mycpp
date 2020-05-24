/*
 Упорядочивание введённых строк по алфавиту

 Из командной строки аргументом задаём количество строк, которые будут введены
 */
#include <stdio.h>
#include <string.h> /*заголовок для работы со строками*/
#include <stdlib.h>

#define N 100
#define M 30

int main(int argc, char *argv[])
{
	

	int i;
	char a[N][M];
	if(argc != 2) {
		printf("Параметры запуска программы:\n strsort <число вводимых слов> (латиницей) \n");
		return 1;
	}

	else {

		int n = atoi(argv[1]); //получаем количество строк
		for(i = 0; i < n; i++)
			scanf("%s", a[i]); //считываем строки

		//теперь самое интересное передаем в ф-цию qsort библиотечную ф-цию strcmp
		//массив передаем, количество сортируемых эл-тоов, размер элемента и ф-цию при помощи которой сортируем
		qsort(a, n, sizeof(char[M]), (int (*)(const void *,const  void *)) strcmp);

		//выводим получившееся
		for (int i = 0; i < n; i++)
		{
			/* code */
			printf("%s ", a[i]);
		}


		printf("\n");

		return 0;
	}
}

