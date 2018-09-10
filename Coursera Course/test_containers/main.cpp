#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s = "abcdefgh";
    for(char c: s) {
        cout << c << ',';
    }
    cout << endl;

    vector<string> nums = {"1", "5", "2", "3", "5+"};
    //Ключевое слово аuto позволяет не указывать тип итератора из вектора
    for(auto c: nums) {
        cout << c << ',';
    }
    cout << endl;
    //Поищем в векторе количество пятерок
    vector<int> Nums = {1, 5, 2, 3, 5, 56, 3, 6, 5};
    /*
    int quantity = 0; //Переменная для хранения количества пятерок
    for (auto i : Nums) {
        if(i == 5) ++quantity;
    }
    */
    //С применением встроенного алгоритма count()
    int quantity = count(begin(Nums), end(Nums), 5);
    cout << "Количество пятёрок в векторе Nums " << quantity << endl;

    //Сортировка
    sort(begin(Nums), end(Nums));
    cout << "Сортировка sort ";

    for(int x: Nums) {
        cout << x << " ";
    }
    cout << endl;


    return 0;
}

