#include <iostream>
using namespace std;

struct library
{
    char name[100];
    char author[100];
    int year;
};


int main()
{

    int num_of_books;
    cout << "Сколько книг в каталоге? ";
    cin >> num_of_books;
    cin.get();

    library *Katalog = new library[num_of_books];//создаем массив структур

    cout << "\nВводим названия книг\n";

    for (int i=0;i < num_of_books;i++)   //ввод данных
    {
        cout << ' ';
        cin.get(Katalog[i].name, 100);
        cin.get();
    };

    cout<<"\nВводим ФИО автора\n";

    for (int i=0;i < num_of_books; i++)   //ввод данных
   {
        cout << ' ';
        cin.get(Katalog[i].author, 100);
        cin.get();
    };

    cout << "\nВводим год выхода книг\n";
    for (int i=0;i < num_of_books; i++)   //ввод данных
   {
        cout << ' ';
        cin >> Katalog[i].year;
        cin.get();
    };

    FILE *fp;

    if((fp = fopen("mylib.dat","wb")) != NULL) {
        fwrite(Katalog, sizeof(Katalog), num_of_books, fp);
        fclose(fp);
    }
    else
        cout << "Ошибка открытия или создания файла!" << endl;

    if((fp = fopen("mylib.dat", "rb")) != NULL) {
        fread(Katalog, sizeof(Katalog), num_of_books, fp);
        fclose(fp);

        cout << " ---------------------------" << endl;
        for(int i = 0; i < num_of_books; i++) {
            cout << "Книга №" << i+1 << endl;
            cout << Katalog[i].name << '\t' << Katalog[i].author << '\t' << Katalog[i].year;
            cout << endl << endl;
        }
        cout << endl;
    }
    else cout << "Ошибка открытия или чтения из файла!" << endl;



    delete [] Katalog;

    return 0;
}
