#include <iostream>

//На динамическом массиве

using namespace std;

int main()
{

    cout << "\t\t*** Простые числа ***\n\n";

    int N;

    cout << "Введите до какого числа искать простые числа > ";
    cin >> N;



    bool *SimpleNumber = new bool[N + 1]; //Массив результатов

    //По умолчанию заполняем массив результатов

    for(int i(2); i < N + 1; i++)
    {
        SimpleNumber[i] = true; //Обращение к динамическому массиву синтаксически не отличается от обращения к статическому, если мы хотим взять значение
    }

    for(int i(2); i <= N; ++i)
    {
        if(SimpleNumber[i])
        {
            for(int j(i*i); j <= N; j+=i) SimpleNumber[j] = false; //Находим НЕ простые числа
        }
    }

    //Выводим результат = только простые числа
    for(int i(2); i < N + 1; i++)
        if(SimpleNumber[i]) cout << "Число i " << i << " простое " << endl;

    delete [] SimpleNumber;
    return 0;
}

