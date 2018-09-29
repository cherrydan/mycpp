/*
 * Программа берет у пользователя 16-значный номер
 * кредитной карты:
 * определяет платежную систему
 * и делает валидацию кредитной карты, согласно алгоритму Луна
 */




#include <iostream>

using namespace std;

string card_system(unsigned flag) {
    switch (flag) {
    case 4:
        return "Карта системы VISA ";
        break;

    case 5:
        return "Карта системы MASTER CARD ";
        break;

    case 2:
        return "Карта системы МИР ";
        break;

    case 9:
        return "Карта национальной платёжной системы Украины - ПРОСТIР ";
        break;

    default:
        return "Неизвестная система платёжных карт!";
        break;
    }
}

bool is_valid_card(string strVal, string *cardSystem) {
    const unsigned ARRAY_SIZE = 15;
    int a[ARRAY_SIZE];
    int j = 0;

    //Преобразовываем строку переданную в кач-ве аргумента в массив из одиночных цифр
    for(unsigned int i = 0; i <= strVal.length(); i++)
        if(strVal[i]>='0' && strVal[i]<='9')
            a[j]=+strVal[i] - 48, j++;


    *cardSystem = card_system(a[0]);

    return true;



}

int main()
{
    cout << "Введите 16-знаковый номер карты: ";

    string strVal = "";

    string cardSystem;

    cin >> strVal;

    if(strVal.length() != 16)
        cout << "Нужно ввести 16 цифр!" << endl;
    else {
        size_t found=strVal.find_first_not_of("1234567890");
        if (found != string::npos) {
            cout << "В номере кредитной карты не должно быть БУКВ!" << endl;
            return -1;
        } else {
            cout << "Всё введено правильно, проверяем..." << endl;
            is_valid_card(strVal, &cardSystem);

            cout << cardSystem << endl;
        }
    }



    return 0;
}
