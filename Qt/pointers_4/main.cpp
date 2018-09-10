#include <iostream>

using namespace std;

int main()
{
    int N;

    cout << "Введите размер массива > ";
    cin >> N;

    int *p = new int[N]; //Выделяем память в куче

    //Имя массива теперь p
    for(int i(0); i < N; ++i) {
        p[i] = i + i;
        cout << "p[" << i << "]" << " = " << p[i] << endl;
    }


    getchar();

    //Освобождаем память
    delete [] p;
    return 0;
}

