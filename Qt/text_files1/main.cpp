/*
 * Задача 7.1. Создать текстовый файл abc.txt и записать туда n вещественных
 * чисел.
 */




#include <iostream>
#include <fstream>
#include <iomanip>



using namespace std;

int main()
{
    int i, N;
    double a;

    ofstream f; //Поток для записи данных в файл
    //Открываем файл, режим ios::out устанавливается по умолчанию
    f.open("abc.txt");

    //вводим количество вещественных чисел
    cout << "N = ";
    cin >> N;

    for(i = 0; i < N; i++) {
        cout << "a = ";
        cin >> a; //получаем от пользователя число
        //если число не последнее:
        if(i < N-1)
            f << a << '\t'; //пишем число в поток и символ табуляции
        else
            //пишем только число
            f << a;
    }

    f.close(); //закрываем поток


    return 0;
}
