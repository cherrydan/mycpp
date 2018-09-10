/*
 * FrameName.cpp
 *
 *  Created on: 09.10.2017
 *      Author: danny
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Please enter your name: ";
	string name;
	cin >> name;

	string greeting = "Hello, " + name + "!";
	string spaces(greeting.size(), ' ');
	string stars(greeting.size(), '*');

	cout << "**" << stars << "**" << endl
		 << "* " << spaces << " *" << endl
		 << "* " << greeting << " *" << endl
		 << "* " << spaces << " *" << endl
		 << "**" << stars << "**" << endl;
	return 0;
}





