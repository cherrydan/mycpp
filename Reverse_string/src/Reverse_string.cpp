//============================================================================
// Name        : Reverse_string.cpp
// Author      : Как стандартными средствами обернуть строку назад
// Version     :
// Copyright   : https://stackoverflow.com/questions/4951796/how-to-reverse-an-stdstring
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	string str1;
	string str2;
	cout << "Enter a string ";
	cin >> str1;
	cout << "You entered '" << str1 << "'" << endl;
	str2 = str1;
	reverse(str2.begin(),str2.end());
	cout << "Reversed: " << str2 << endl;


	return 0;
}
