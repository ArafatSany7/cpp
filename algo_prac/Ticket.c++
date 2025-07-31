#include <iostream>
using namespace std;

int bs(int dep_time[], int slot, int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (dep_time[mid] == slot)
        {
            return mid;
        }
        else if (slot < dep_time[mid])
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
    int dep_time[] = {12, 14, 17, 18, 19, 21, 22, 23};
    int slot;
    int size = sizeof(dep_time) / sizeof(dep_time[0]);

    cout << "Enter Your time Slot: ";
    cin >> slot;

    int time = bs(dep_time, slot, size);

    if (time != -1)
    {
        cout << "Slot found at index number : " << time << " And the index value was " << slot << "\n";
    }
    else
    {
        cout << "Time Not Fouund";
    }
}