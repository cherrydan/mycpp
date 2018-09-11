#include <iostream>

/*
 * Программа показывает как функция при помощи 3 указателей вовращает три параметра
 *
 */

using namespace std;


void change_date(int *d, int *m, int *y) {
    *d = *d + 5;
    *m = *m + 1;
    *y = *y + 1;
}

int main()
{
    int d, m, y;

    d = 25;
    m = 10;
    y = 2017;

    //Передаём адреса трех int-ов и получаем правильную дату
    change_date(&d, &m, &y);

    cout << "d = " << d << " m = " << m << " y = " << y;


    return 0;
}
