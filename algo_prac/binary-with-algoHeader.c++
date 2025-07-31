#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {12, 14, 15, 16, 18, 19, 20};

    int target;

    cout << "Enter the value for target : ";
    cin >> target;

    if (binary_search(arr.begin(), arr.end(), target))
    {
        cout << "Found!";
    }
    else
    {
        cout << "Not found";
    }
}