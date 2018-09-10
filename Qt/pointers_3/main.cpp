#include <iostream>

using namespace std;

int main()
{

    char str[54] = "fdjskldfjksdlfsd\0kjflskdjfl";

    char *p = str; //Указатель на тип char

    cout << "p = " << p << endl; //cout выводит массив символов пока не встретится нулевой байт

    cout << "Для вывода значений указателя на символьный массив разименование НЕ НУЖНО." << endl;

    getchar();

    cout << "Взятие адреса первого элемента &p = " << &p << endl; //Взятие адреса первого элемента



    return 0;
}

