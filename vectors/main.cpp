#include <iostream>
#include <vector>
#define SPACE " "

using namespace std;

int main()
{
    vector<int> nums = {1,3,5,7};
    int size = nums.size();
    for(int i = 0; i < size; i++) {
        cout << nums[i] << SPACE;
    }

    cout << endl;
    return 0;
}

