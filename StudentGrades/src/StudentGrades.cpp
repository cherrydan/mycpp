//==========================================================
//
// C++ Short & Sweet
// Модернизировано мной. Цикл while заменен на цикл for
// Пользователь вводит колич домашних заданий
//
// =========================================================


#include <iostream>
using namespace std;

int main() {
   cout << "Please enter your midterm and "
		   "final exam grades: ";
   double midterm, final;
   cin >> midterm >> final;

   int count = 0;
   cout << "Enter number of homeworks: "; cin >> count;
   double sum = 0;
   double x;

   cout << "Enter all your homework grades, "
            "followed by ENTER: ";

   for(int i = 1; i <= count; i++) {
	   cin >> x;
      sum += x;
   }
   // Print three significant digits.
   streamsize prec = cout.precision(3);
   cout << endl << "Your course grade is "
       << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
       << endl;
   cout.precision(prec);
   return 0;
}
