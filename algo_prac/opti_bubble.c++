#include <iostream>
#include <vector>
using namespace std;

void bsort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
    vector<int> arr = {2, 5, 6, 1, 4, 98, 45, 34};
    bsort(arr);

    cout << "Sorted Array is : ";
    for (int num : arr)
    {
        cout << num << " ";
    }
}