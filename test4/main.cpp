#include <iostream>

using namespace std;

int main()
{
    int x1, x2, y1, y2, z1, z2;

    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;

    unsigned res = ((x2 * 3600) + (y2 * 60) + z2) - ((x1 * 3600) + (y1 * 60) + z1);

    cout << res << endl;


    return 0;
}

