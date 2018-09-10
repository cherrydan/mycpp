#include <iostream>
#include <vector>
#include <string>

/*
 * ЗАДАНИЕ.
 * Дано трехзначное число. Определить, сколько в нём единиц, десятков и
 * сотен.
 * 9. Дано трехзначное число. Найти сумму его цифр.
 * 10. Дано трехзначное число. Найти произведение его цифр.
 */

using namespace std;

int main()
{
    //Запихнем результаты раздробления числа в векторы
    vector <int> nums;
    vector<string> names;
    int x; //Число
    cout << "Введите трехзначное число ";
    cin >> x;
    nums.push_back(x / 100);
    names.push_back(" сотен ");
    nums.push_back((x/10) % 10);
    names.push_back(" десятков ");
    nums.push_back(x % 10);
    names.push_back(" единиц ");
    cout << " Число " << " содержит " << nums[0] << names[0] << nums[1] << names[1] << nums[2] << names[2] << endl; //Обращение к векторам по индексу
    int sum = nums[0] + nums[1] + nums[2];
    int proiz = nums[0] * nums[1] * nums[2];
    cout << "Сумма составляющих число " << x << " = " << sum << endl;
    cout << "Произведение составляющих число " << x << " = " << proiz << endl;

    return 0;
}

