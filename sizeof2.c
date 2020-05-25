#include <stdio.h>
int main() {
printf("Размер массива целых чисел = %d байт\n", sizeof(int[3]));
struct {int score; char grade;} result;
printf("Размер структуры в памяти компьютера = %d байт\n", sizeof(result));
return 0;
}
