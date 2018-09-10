#include <iostream>

using namespace std;

int main()
{

    //char str[40] = "sfdjklfsjdlfskjfl";

    double d[10];

    for(int i(0); i < 10; ++i) {
        d[i] = (double) i + 3;
    }

    //cout << str;

    //getchar();

    cout << "d = " << d << endl;

    double *p = d; //Указатель на массив


    cout << "Указатель на массив: " << p << endl;

    cout << "Разыменовывание указателя на массив: " << *p << endl;

    cout << "Значение во второй ячейке массива: " << d[1] << endl;

    //увеличиваем указатель на 1
    ++p;

    getchar();

    cout << "Указатель на массив +1: " << p << endl;

    cout << "Разыменовывание указателя на массив +1: " << *p << endl;

    cout << "Значение во второй ячейке массива: " << d[1] << endl;

    cout << "p[7] = " << p[7] << endl; //Значение по указателю

    cout << "p + 7 = " << (p + 7) << endl; //Адрес

    cout << "&p[7] = " << &p[7] << endl; //Адрес

    cout << "*(p + 7) = " << *(p + 7) << endl; //Значение


    return 0;
}

