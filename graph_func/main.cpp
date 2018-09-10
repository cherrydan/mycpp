#include <iostream>

using namespace std;

/*
 * Аналитически функцию, представленную на рис. 3.10, можно записать так:
 * y(x) = 4, <= -2
 * y(x) = 1, >= 1
 * y(x) = x2
 */


int main()
{

    float x, y;
    cout << "Введите x -> ";
    cin >> x;
    if(x <= -2) {
        y = 4;
    }
    else if(x >= 1) {
        y = 1;
    }
    else {
        y = x * x;
    }
    cout << "y = " << y << endl;


    return 0;
}

