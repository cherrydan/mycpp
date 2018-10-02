/*
 * Задача 7.4. Создать двоичный файл abc.dat, куда записать целое число n и n
 * вещественных чисел.
 *
 * (Программирование на языке С++ в среде Qt Creator, стр. 238)
 */



#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    FILE *stream; //описываем переменную-двоичный файл
    int i = 0, n = 0;
    double *a;
    int numwritten = 0,numread = 0;

    if((stream = fopen("abc.dat","wb")) != NULL) {
        cout << "N = ";
        cin >> n;

        a = new double[n];

        for(i = 0; i < n; i++)
            cin >> a[i];

        numwritten = fwrite(a, sizeof(double), n, stream);

        cout << "Wrote " << numwritten << " items" << endl;
        fclose(stream);

    }
    else {
        cout << "Error creating or opening file!" << endl;
        return -1;
    }

    if((stream = fopen("abc.dat","rb")) != NULL) {
        numread = fread(a, sizeof(double), n, stream);
        cout << "Number of items read  " << numread << endl;
        cout << "Contents of binary file: " << endl;

        for(i = 0; i < n; i++)
            cout << a[i] << '|';

        cout << endl;

        fclose(stream);
    }
    else {
        cout << "Error creating or opening file!" << endl;
        return -1;
    }

    return 0;
}
