#include <iostream>

using namespace std;

int main()
{
    float a, b, s, p;
    cout<<"Сторона прямоугольника a = ";
    cin>>a;
    cout<<"Сторона прямоугольника b = ";
    cin>>b;
    p = 2*(a + b); //Периметр
    s = a * b; //Площадь
    cout<<"Периметр прямоугольника = "<< p << endl;
    cout<<"Площадь прямоугольника = "<< s << endl;
    return 0;
}
