#include <iostream>

using namespace std;

int Modulus(int x) {
    if (x > 0) return x;
    else return -x;
}

int main()
{
    int a;
    cout << "a = ";
    cin >> a;
    cout << "Modulus(" << a << ") = " << Modulus(a);
    cout << endl;
    return 0;
}

