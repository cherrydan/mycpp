#include <iostream>
#include <string>
#include <vector>


using namespace std;

/*Пользовательские типы = struct
 *
 */

struct Person {
    string name;
    string surname;
    int age;
};

int main()
{
    //Создаем вектор из типа Person
    vector<Person> staff;
    staff.push_back({"Иван", "Иванов", 25}); //Добавляем персону в вектор
    staff.push_back({"Петр", "Петров", 32});

    //Выводим мешанку из наших данных
    cout << staff[0].name << " " << staff[1].surname << " " << (staff[0].age + staff[1].age) << endl;


    return 0;
}

