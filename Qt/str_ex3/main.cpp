/*
 * Задача 8.1. Некоторый текст хранится в файле text.txt. Подсчитать количе-
 *ство строк и слов в тексте.
 *
 * (Программирование на языке С++ в среде Qt Creator, стр. 246)
 */

#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main()
{

    ifstream f;
    int p, j, i, kol, m, n = 0;
    string s[10];
    f.open("text.txt");
    if (f) {
        while (!f.eof()) {
            getline(f,s[n]);
            cout << s[n] << '\n';
            n++;
        }
        f.close();
        cout << endl;
        cout << "Количество строк в тексте: " << n << endl;
        for(kol = 0, i = 0; i < n; i++) {
            m = s[i].length();
            s[i]+=" ";
            for(p = 0; p < m;) {
                j = s[i].find(" ",p);
                if(j != 0) {
                    kol++;
                    p = j + 1;
                }
                else break;

            }
        }
        cout << "Количество слов в тексте: " << kol << endl;
    }
    else cout << "Файл не найден!" << endl;


    return 0;
}
