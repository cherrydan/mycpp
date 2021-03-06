/* Числовая переменная типа int способна содержать положительные
 * и отрицательные значения. Они называются знаковыми. Диапазон до-
 * пустимых значений может определяться системой как длинный или ко-
 * роткий.
 * Если переменная типа int по умолчанию создается как «длинная»
 * (что более вероятно), она, как правило, может иметь значения от
 * –2.147.483.648 до +2.147.483.647.
 * С другой стороны, если переменная типа int создается как «короткая»
 * (что менее вероятно), она, как правило, способна иметь значения от
 * –32.768 до +32.767.
 * Размер диапазона может быть указан явно при помощи ключевых слов-
 * спецификаторов short и long в объявлении переменной, например, так:
 * short int num1; (позволяет сэкономить память)
 * long int num2;  (позволяет работать с крупными числами)
 *
 * Библиотечный заголовочный файл limits.h содержит определяемые
 * реализацией размеры каждого типа данных. Они доступны через кон-
 * станты. Для переменных типа int, размер которых не указан, это INT_MAX
 * и INT_MIN. Аналогично для переменных типа short int это переменные
 * SHRT_MAX и SHRT_MIN, для переменных типа long int — LONG_MAX и LONG_MIN.
 * Неотрицательные беззнаковые переменные типа int могут быть объяв-
 * лены с помощью ключевого слова-спецификатора unsigned в случае, если
 * переменная никогда не получит отрицательное значение. Переменная
 * типа unsigned short int, как правило, будет иметь диапазон от 0 до 65.535,
 * при этом она займет столько же места в памяти, сколько и обычная
 * переменная типа short int. Переменная типа unsigned long int, как правило,
 * будет иметь диапазон от 0 до 4.294.967.295, при этом она займет столь-
 * ко же места в памяти, сколько и обычная переменная типа long int.
 * Операция sizeof языка C может быть использована для того, чтобы
 * узнать, какой объем памяти резервируется под переменные разно-
 * го типа. Рекомендуется использовать минимально возможный объем
 * памяти.
 *
 *
 * (Майк МакГрат. "С-программирование для начинающих", стр. 28)
 */


#include <stdio.h>
#include <limits.h>

int main() {
	printf("short int... \tразмер: %d байт\t",sizeof(short int));
	printf("от %d до %d\n", SHRT_MIN, SHRT_MAX);

	printf("long int... \tразмер: %d байт\t", sizeof(long int));
	printf("от %d до %d\n", LONG_MIN, LONG_MAX);

	printf("char... \tразмер: %d байт\n", sizeof(char));
	printf("float... \tразмер: %d байт\n", sizeof(float));
	printf("double... \tразмер: %d байт\n", sizeof(double));

	return 0;
}


