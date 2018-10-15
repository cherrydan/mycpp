#include <iostream>

using namespace std;

int main()
{
    //структура комплексное число
    struct complex
    {

        double Re; //действительная часть
        double Im; //мнимая часть

    };

    complex p; //переменная для хранения комплексного числа

    int i, n;
    FILE *f;

    cout << "n = "; cin >> n;

    f = fopen("complex.dat", "wb");
    fwrite(&n, sizeof(int), 1, f);

    for(i = 0; i < n; i++) {

        cout << "Введите комплексное число: " << endl;
        cin >> p.Re;
        cin >> p.Im;
        //вывод комплексного числа
        cout << p.Re << '+' << p.Im << 'i' << endl;
        //запись его в двоичный файл
        fwrite(&p, sizeof(complex), 1, f);

    }

    fclose(f);


    return 0;
}
