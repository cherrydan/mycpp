//============================================================================
// Name        : Hello_namespaces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

namespace greet {
 char *hello = "Привет! Поздравляю! Тебе ";
}

namespace age {
int myage = 38;
}

using namespace greet;
using namespace age;


int main() {

	cout << hello << myage << " лет!" << endl;


	return 0;
}
