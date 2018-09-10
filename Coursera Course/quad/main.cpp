#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float x1, x2;
    float d;

    cin >> a >> b >> c;

    if(a == 0) {
        x1 = -(c/b);
        cout<<x1<<endl;

        }

    else if (b == 0) {
        x1 = -(c / a);
        x2 = (c / a);
        cout << x1 << endl;
    }
    else if((a == 0 && c == 0) || (b == 0 && c == 0)) {
        x1 = 0;
        x2 = 0;
        cout << x1 << " " << x2;
    }
    else if(c == 0) {
        x1 = 0;
        x2 = (b/a);
        cout << x1 << " " << x2;
    }

    else {
    //Вычисляем дискриминант

    d = b*b - 4*a*c;

    if(d > 0) //Если дискриминант больше или равен 0
    {
        x1 = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);

        x2 = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        if(x1 == x2) {
            cout << x1 << endl;
        }
        else
        {
            cout << x1 << " " << x2 << endl;
        }
    }
    else if(d == 0) {
        x1 = (-b) / (2 * a);
        cout << x1 << endl;
    }
}

    return 0;
}


