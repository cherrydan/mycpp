/*
 *
 * 
 * Копирование ввода на вывод - 1-я версия
 * При наличии функций getchar и putchar, ничего больше не зная о вводе-выводе,
 * можно написать удивительно много полезных программ. Простейший пример - это программа, 
 * копирующая по одному символу с входного потока в выходной поток.
 *
 * (Керниган. Ритчи. Язык программирования С. стр. 28-29)
 *
 */
 
#include <stdio.h>
 
 int main() {
 
 int c; /* КОД символа*/
 
 

/*Скобки внутри условия, вокруг присваивания, необходимы. Приоритет != выше, чем приоритет =, 
из чего следует, что при отсутствии скобок проверка!= будет выполняться до операции присваивания =. 
Таким образом, запись
c = getchar() != EOF
эквивалентна записи
c = (getchar() != EOF)
(Керниган. Ритчи. Язык программирования С. стр. 28-29)

И действительно тогда наша программа работает неправильно
*/
 
 while((c = getchar())!= EOF) {
	 putchar(c);
	
 }
 /*
 В данной версии ввод "централизован". - в программе имеется только одно обращение к getchar. В результате она более компактна и легче воспринимается при чтении. 
 Вам часто придется сталкиваться с такой формой записи, где присваивание делается вместе с проверкой. 
 (Чрезмерное увлечение ею, однако, может запутать программу, поэтому мы постараемся пользоваться указанной формой разумно.)
 */
 
 return 0;
 }
 