/*
* Объявление переменной, которое включает в себя ключевое слово
* register, указывает компилятору, что эта переменная будет часто ис-
* пользоваться в программе. Это делается для того, чтобы компилятор
* разместил переменные, зарегистрированные таким способом, в ре-
* гистрах компьютера, чтобы ускорить доступ к ним. Полезность этого
* действия довольно сомнительная, поскольку компиляторы могут сво-
* бодно проигнорировать это указание.
* С использованием ключевого слова register могут быть объявлены
* только внутренние локальные переменные.
*/

#include <stdio.h>

int main() {
	register int num = 0;
	while(num < 5) {
		++num;
		printf("Pass %d\n", num);
		
		}

	/*
	 * Если переменная объявлена как register, у вас не получится
	 * узнать ее адрес в памяти
	 *
	printf("Memory adress of num: %p",&num);
	*/
	return 0; 
}