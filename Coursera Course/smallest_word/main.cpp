#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> words;
    string smallest;
    string input;

    int counter = 0;
    while(counter < 3) {
    cin >> input;
    words.push_back(input);
    counter++;
    }

    for(auto word : words) {

        if(smallest.empty()) {
            smallest = word;
        }
        if(word < smallest) {
            smallest = word;
        }

    }

    cout << smallest << endl;



    return 0;
}

