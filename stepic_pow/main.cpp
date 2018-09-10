#include <iostream>
#include "power.h"

using namespace std;





int main() {
    int x, n;
    cout << "X = ";
    cin >> x;
    cout << "n = ";
    cin >> n;
    cout << endl << "X в степени n = " << power(x,n) << endl;
    return 0;
}
