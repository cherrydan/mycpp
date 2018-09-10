//============================================================================
// Name        : pig_latin.cpp
// Author      : Забавная программа переиначивающая введенное слово под "свинячью латынь"
// Version     :
// Copyright   : Me
// Description :
//============================================================================

#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
using namespace std;


string toLower(string str) {
	string trans;
	trans = str;
	std::transform(trans.begin(), trans.end(), trans.begin(), ::tolower);
	return trans;
}

int main() {

	string original;
	string word;
	char first;
	string newword;
	string pig = "ay";

	while(true) {
		cout << "enter a word > ";
		cin >> original;
		if(original != "fuck") {
			word = toLower(original);
			first = word[0];
			newword = word + first + pig;
			cout << "Original word " << original << " PigLatin: " << newword << endl;

		}
		else {
			cout << "Stopped!";
			break;
		}
	}



	return 0;
}
