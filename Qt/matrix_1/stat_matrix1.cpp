/*
 * Запись и вывод в статическую матрицу
 * (Программирование на языке С++ в среде QtCreator, стр. 188)
 */


#include <iostream>

using namespace std;

int main()
{
    int i,j, N, M;
    int a[20][20]; //Статическая матрица 20 на 20

    cout << "N= "; //Кол-во строк
    cin >> N;
    cout << "M= "; //Кол-во столбцов
    cin >> M;

    //Ввод в матрицу А
    cout << "Ввод матрицы А: " << endl;

    for(i = 0; i < N; i++)
        for(j = 0; j < M; j++)
            cin >> a[i][j];

    //Вывод матрицы А
    cout << "Вывод матрицы А: " << endl;

    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }





    return 0;
}
