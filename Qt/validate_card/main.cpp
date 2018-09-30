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

    int sum = 0;

    //Преобразовываем строку переданную в кач-ве аргумента в массив из одиночных цифр
    for(unsigned int i = 0; i <= strVal.length(); i++)
        if(strVal[i]>='0' && strVal[i]<='9')
            a[j]=+strVal[i] - 48, j++;


    *cardSystem = card_system(a[0]);

    //проходим получившийся массив чисел
    for(unsigned k = 0; k <= ARRAY_SIZE; k++)
    {
        //проверяем чётный ли элемент массива
        if(k % 2 == 0) {
        int r = a[k]; //берём из него значение
        r*=2; //умножаем на два, согласно алгоритму

        if(r > 9) //если полученное больше 9
            sum += (r - 9); //отнимаем 9 и наращиваем сумму наших чисел
       else
            sum += r; //если меньше 9, суммируем исходное число
        }

        else //если элемент массива нечётный
            sum += a[k]; //его значение без изменений приобщаем к сумме и чётных элементов
    }

    //если получившаяся сумма кратна 10 - возвращаем true, карта валидна
    if(sum % 10 == 0) return true;
    else
        return false;

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


            if(is_valid_card(strVal, &cardSystem)) {
                cout << cardSystem << endl;
                cout << "карта №" << strVal << " ВАЛИДНА!" << endl;

            }
            else {
                cout << cardSystem << endl;
                cout << "карта №" << strVal << " НЕДЕЙСТВИТЕЛЬНА!" << endl;
            }


        }
    }



    return 0;
}
