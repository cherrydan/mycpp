#include <iostream>

using namespace std;

int main()
{

    int year;

    cout << "Enter a year = ";
    cin >> year;
    bool mod400 = year % 400 == 0;
    if((year % 4 == 0 && year % 100 != 0)
            || mod400) {
        cout << "366 in newstyle calendar" << endl;
    }
    else {
        cout << "365 in newstyle calendar" << endl;
    }

    return 0;
}

