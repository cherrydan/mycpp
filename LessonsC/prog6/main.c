/*
 Макросы и генерация случайных чисел
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SEED srand(time(NULL))
#define ARRAY_SIZE 10

int main()
{
    SEED;
    int arr[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++) {
    arr[i] = i + 1;
    printf("%d\t", arr[i]);
    }
    printf("\n");
    unsigned i = 0;
    //генерация от 0 до 18
    SEED;
    i = (rand() * 1.0 / RAND_MAX) * 10 + 11;
    printf("%d\n", i);
    SEED;
    for(int j = 0; j < ARRAY_SIZE; j++) {
    arr[j] = rand() * 1.0 / RAND_MAX * 20 + 20;
    printf("%d\t", arr[j]);
    }
    return 0;
}
