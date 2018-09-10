#include <iostream>
#include <math.h>

/*
 * Программа позволяет решить кубическое уравнение
 */

using namespace std;

const float pi = 3.14159;

int main()
{
    float a, b, c, d;
    float p, q, r, s, t, D;
    float ro, fi;
    float x1, x2, x3;
    float u, v, h, g;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "d = ";
    cin >> d;
    r = b / a;
    s = c / a;
    t = d / a;
    p = ((3 * s) - pow(r, 2)) / 3;
    q = (2 * pow(r,3)) / 27 - r*s/3 + t;
    D = pow(p/3, 3) + pow(q/2, 2);

    if(D < 0) {
        ro = sqrt((float)pow(-p, 3)) / 27;
        fi = -q / (2 * ro);
        fi = pi/2 - atan(fi/sqrt(1 - fi*fi));
        x1 = 2 * pow(ro, (float)1/3) * cos(fi/3) - r/3;
        x2 = 2 * pow(ro, (float)1/3) * cos(fi/3 + 2*pi/3) - r/3;
        x3 = 2 * pow(ro, (float)1/3) * cos(fi/3 + 4*pi/3) - r/3;

        cout << endl << "x1 = " << x1 << "\t x2 = " << x2 << "\t x3 = " << x3 << endl;

    }
    else {
        if(-q/2+sqrt(D) > 0) u = pow((-q/2+sqrt(D)), (float)1/3);
        if(-q/2+sqrt(D) < 0) u = -pow(fabs(-q/2+sqrt(D)), (float)1/3);
        else u = 0;

        if(-q/2-sqrt(D) > 0) v = pow((-q/2-sqrt(D)), (float)1/3);
        if(-q/2-sqrt(D) < 0) u = -pow(fabs(-q/2-sqrt(D)), (float)1/3);
        else v = 0;
        x1 = u+v-r/3;
        h = -(u+v)/2 - r/3;
        g = (u - v) / 2 * sqrt((float)3);
        cout << endl << "x1 = " << x1;
        if(x2 >= 0) {
            cout << x1 << " + " << x2 << "i\t";
            cout << x1 << " - " << x2 << "i\t";
        }
        else {
            cout << x1 << " - " << fabs(x2) << "i\t";
            cout << x1 << " + " << fabs(x2) << "i\t";
        }
    }

    if(g>=0) {
        cout << "\t x2 = " << h << " + " << g << "i";
        cout << "\t x3 = " << h << " - " << g << "i";
    }
    else {
        cout << "\t x2 = " << h << " - " << fabs(g) << "i";
        cout << "\t x2 = " << h << " - " << fabs(g) << "i";
    }



    cout << endl;

    return 0;
}

