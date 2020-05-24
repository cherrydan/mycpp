
/*
рассмотрим функцию nanosleep

продемонстрируем два прогресс бара, в виде увеличивающихся полосок и вертолётика

*/


#include <stdio.h>
#include <time.h>


#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 60

void printProgress (double percentage)
{
    int val = (int) (percentage * 100);
    int lpad = (int) (percentage * PBWIDTH);
    int rpad = PBWIDTH - lpad;
    printf ("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, "");
    fflush (stdout);
}


void rock(int times, double delay) 
{

	struct timespec tw2 = { delay };
	struct timespec tr;

	for(int j = 0; j <= times; j++)
	{
	if(j == 0)
		printf("|");
	else
		printf("\r\b|");

	fflush(stdout);
	nanosleep(&tw2, &tr);

	char a[] = { '/', '-', '\\'};


	for(int i = 0; i <= 2; i++) {
	printf("\r\b%c",a[i]);
	fflush(stdout);
	nanosleep(&tw2, &tr);
		}
	}
	

}	 

int main()
{

	//Структура содержащая время задержки
   	struct timespec tw = {0,125000000};
  
   //Структура, в которую будет помещен остаток времени
   //задержки, если задержка будет прервана досрочно
   	struct timespec tr;

	for(double i = 0.01; i <= 1.01; i+=0.01) {
		nanosleep(&tw, &tr);
		printProgress(i);

	}

	printf("\nНажмите любую клавишу...\n");
	getchar();

	printf("Вертолётик:\n");
   	rock(3, 1.1250000000);

	printf("\nНажмите любую клавишу...\n");
	getchar();

	return 0;
}