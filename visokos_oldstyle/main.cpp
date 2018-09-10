#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter a year = ";
    cin >> year;
    if(year % 4 == 0) {
        cout << 366 << " days in oldstyle calendar" << endl;
    }
    else {
        cout << 365 << "days in oldstyle calendar" << endl;
    }
    return 0;
}

