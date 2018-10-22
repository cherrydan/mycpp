#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

int main()
{

    complex<double> b,c; //описание комплексных чисел

    string prompt = "Обратите внимание, что при вводе комплексных чисел с клавиатуры\n действительная и мнимая части вводятся в скобках через запятую:\n (действительная_часть, мнимая_часть)";

    cout << prompt << endl;

    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    //деление двух комплексных чисел
    cout << "b/c = " << b / c << endl;



    return 0;
}
