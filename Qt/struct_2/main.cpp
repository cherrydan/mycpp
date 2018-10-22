/*
Следующая программа считывает информацию из файла complex.dat — ко-
личество комплексных чисел в переменную n, а сами комплексные числа в массив
p. Затем происходит поиск комплексного числа с максимальным модулем в мас-
сиве p.
(Программирование на языке С++ в среде QtCreator, стр. 251)
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    struct complex {
        int Re;
        int Im;
  };

  //динамический массив комплексных чисел
    complex *p;

    int i, n, nmax;

    double max;

    FILE *f;
    f = fopen("complex.dat", "rb");
    fread(&n, sizeof(int), 1, f); //читаем из двоичного файла количество введённых чисел

    p = new complex[n];

    fread(p, sizeof(complex), n, f);

    //поиск комплексного числа с максимальным модулем
    max = sqrt(p[0].Re*p[0].Re + p[0].Im*p[0].Im);

    for(i = 1, nmax = 0; i < n; i++)
        if(sqrt(p[i].Re*p[i].Re + p[i].Im*p[i].Im) > max) {
            max = sqrt(p[i].Re*p[i].Re + p[i].Im*p[i].Im);
            nmax = i;
        }

    cout << "max = " << max << "\t" << "nmax = " << nmax << endl;

    return 0;


}
