/*
 Создаем указатель на int, выводим его адрес и разыменовываем
 */
 #include <stdio.h>

int main() 
{


	int *p;

	int i = 120;

	p = &i;

	printf("%p = %x (hex)\n", &p, *p);



	return 0;


}