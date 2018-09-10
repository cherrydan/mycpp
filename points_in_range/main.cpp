#include <iostream>

/*
 * Даны вещественные числа x и y. Определить, принадлежит ли
 * точка с координатами (x; y) заштрихованной области
 */

using namespace std;

int main()
{

    float x, y;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    if(x >= -1 && x <= 3 && y >= -2 && y <= 4) {
        cout << "Точка находится в заданной области";
    }
    else {
        cout << "Точка НЕ находится в заданной области" << '\a';

    }

    cout << endl;


    return 0;
}

