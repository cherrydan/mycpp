#include <iostream>
/*
 * Выведем на экран таблицу умножения
 */

using namespace std;

int main()
{
    for(int i = 1; i<= 10; i++) {
            for(int j = 1; j <= 10; j++) {
            cout << i * j << "\t";

            }
            cout << endl;
        }


    cout << endl;
    return 0;
}

