#include <stdio.h>

int main() {

	int num = 100;
	double pi = 3.1415926536;
	printf("Integer is %d\n", num);
	printf("Values are %d and %f\n",num,pi);
	printf("%%7d displays %7d\n",num);
	printf("%%07d displays %07d\n",num);
	printf("Pi is aproximately %1.10f\n",pi);
	printf("Right-alligned %10.3f rounded Pi\n", pi); /*Количество пробелов в правом отступе.количество знаков после точкиf=формат с плавающей точкой*/
	printf("Left-alligned %-11.3f rounded Pi\n", pi); /*-Количество пробелов в левом отступе.количество знаков после точкиf=формат с плавающей точкой*/
	return 0;
}