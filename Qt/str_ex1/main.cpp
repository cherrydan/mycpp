/*
 * Пример объявления и ввода строк
 * (Программирование на языке С++ в среде Qt Creator, стр. 242
 */

#include <iostream>

using namespace std;

int main()
{
    char s2[25], *s3, s4[30]; //создаём три строки, две из них массив, одна указатель

    cout << "Введите строку " << endl;

    /*
     * Дело в том, что функция cin вводит строки до встретившегося пробела. Более
    универсальной функцией является функция getline (накалывался на это когда работал над
    записью структуры в бинарный файл*/

    cout << "s2 = "; cin.getline(s2, 25);
    cout << "Была введена строка " << endl;
    cout << "s2 = " << s2 << endl;
    s3 = s4; //запись в указатель s3 адреса строки  s4
    cout << "Введите строку " << endl;
    cout << "s3 = "; cin.getline(s3,100);
    cout << "Была введена строка " << endl;
    cout << "s3 = " << s3 << endl;
    cout << "Сформированая строка по указателю " << endl;
    cout << "s4 = " << s4; //s4 является копией s3
    cout << endl;

    return 0;
}
