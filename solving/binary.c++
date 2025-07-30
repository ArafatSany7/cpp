#include <iostream>
using namespace std;

int bs(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 8, 12, 16, 18, 20, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter target : ";
    cin >> target;

    int result = bs(arr, size, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result << " and the value of target is " << target << " \n";
    }
    else
    {
        cout << "Element not found !!" << "\n";
    }
}