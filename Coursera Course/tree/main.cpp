#include <iostream>

using namespace std;

int main()
{
    for(int i = 8; i>=1; i--) {
            cout << '\t';
            for(int j = 1+i; j <=9 ; j++) {
            cout << "*" << " ";

            }
            cout << endl;
        }

    return 0;
}

