/*
 * Задача 7.3. В файле abc.txt (рис. 7.2) хранится массив вещественных чисел,
 * дописать в файл этот же массив, упорядочив его по возрастанию.
 *
 * (Программирование на языке С++ в среде Qt Creator, стр. 235)
 */




#include <iostream>
#include <fstream>

using namespace std;

int main()
{
ifstream f; //Поток для чтения.
ofstream g; //Поток для записи.

float *a, b;

a = new float[100]; //динамический массив на 100 элементов

int i, j, n = 0;

f.open("abc.txt", ios::in); //открываем файл в режиме чтения

//чтение в массив
if (f) {
    while (! f.eof()) {
        f >> a[n];
        n++;
    }

    //сортировка
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
            if(a[j] > a[j + 1])
            {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;

            }
    f.close();
    g.open("abc.txt", ios::app);
    g << '\n';
    for(i = 0; i < n; i++)
        if(i < n - 1)
            g << a[i] << '\t';
        else g << a[i];
    g.close();

}

else cout << "Файл не найден!" << endl;

delete[] a;


return 0;
}
