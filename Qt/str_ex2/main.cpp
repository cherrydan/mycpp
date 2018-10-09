/*
 * Пример конкатенации двух string в С++
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    cout << "a = ";
    getline(cin,a);
    cout << "b = ";
    getline(cin, b);

    a = a + ' ' + b;

    cout << "a = a + b: " << a << endl;

    return 0;
}
