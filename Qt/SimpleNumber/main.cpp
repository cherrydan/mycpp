//На статическом массиве

#include <iostream>

using namespace std;

int main()
{

    cout << "\t\t*** Простые числа ***\n\n";

    const int N = 50; //Размер статического массива

    bool SimpleNumber[N + 1]; //Массив результатов

    //По умолчанию заполняем массив результатов

    for(int i(2); i < N + 1; i++)
    {
        SimpleNumber[i] = true;
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


    return 0;
}

