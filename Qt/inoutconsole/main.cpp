#include <iostream>
#include <QTime>

using namespace std;

int main()
{
    cout << "Введите что-нибудь для получения текущего времени > ";
    int nb;
    cin >> nb;

    cout << QTime::currentTime().toString().toStdString() << endl;
    return 0;
}

