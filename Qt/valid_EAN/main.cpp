#include <iostream>

using namespace std;

bool is_validEAN13(string strVal)
{
    const int ARRSIZE = 12;
    int a[ARRSIZE];
    int j = 0;

    int oddsum = 0;
    int evensum = 0;
    int evenmult = 0;
    int ressum = 0;
    int checksum = 0;

    //Преобразовываем строку переданную в кач-ве аргумента в массив из одиночных цифр
    for(unsigned int i = 0; i <= strVal.length(); i++)
        if(strVal[i]>='0' && strVal[i]<='9')
            a[j]=+strVal[i] - 48, j++;

    //Сумируем нечетные эл-ты, кроме последней, проверочной цифры
    for(int k = 0; k < ARRSIZE; k+=2)
        oddsum+=a[k];

    //Суммируем чётные элементы
    for(int k = 1; k <= ARRSIZE; k+=2)
        evensum+=a[k];

    //Умножаем сумму чётных элементов на 3
    evenmult = evensum * 3;

    //Вычисляем сумму произведения чётных элементов и суммы нечетных
    ressum = evenmult + oddsum;


    //Вычисляем контрольное число, которое должно совпасть с последней цифрой штрих-кода
    checksum = 10 - (ressum % 10);

    //Если эти цифры совпали, товар легален
    if(a[ARRSIZE] == checksum) return true;
    else
        return false;




}

int main()
{

    cout << "Введите 13-знаковый штрих код: ";

    string strVal = "";

    cin >> strVal;

    if(strVal.length() != 13)
        cout << "Нужно ввести 13 цифр!" << endl;
    else {
        size_t found=strVal.find_first_not_of("1234567890");
        if (found != string::npos) {
            return -1;
        } else {
            cout << "Всё введено правильно, проверяем..." << endl;
            if(is_validEAN13(strVal))
                cout << "Штрих-код " << strVal << " легален!" << endl;
            else
                cout << "Штрих-код " << strVal << " НЕЛЕГАЛЕН!" << endl;
        }

    }


    return 0;
}
