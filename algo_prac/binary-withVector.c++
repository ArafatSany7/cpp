#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> arr, int target)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;

    cout << "Enter Target : ";
    cin >> target;

    int result = bs(arr, target);

    if (result != -1)
        cout << "Target Found at index : " << result;
    else
        cout << "Index not found";
}