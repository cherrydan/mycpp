#include <iostream>

/*
 * 18. Расстояние L задано в метрах. Найти количество полных километров в нём
 * и остаток в метрах.
 */


using namespace std;

int main()
{
    int L;
    cout << "Введите расстрояние в метрах: ";
    cin >> L;
    cout << "Полных километров " << L / 1000 << "; остаток в метрах " << L % 1000 << endl;
    return 0;
}

