#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter key you want to find : ";
    cin >> key;

    int *result = find(arr, arr + size, key);

    if (result != arr + size)
    {
        int index = result - arr;
        cout << "Element at index : " << index;
    }
    else
        cout << "elemtn not found";
}