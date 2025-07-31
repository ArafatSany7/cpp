#include <bits/stdc++.h>
using namespace std;

int flight(vector<int> time, int prefTime)
{
    int low = 0, high = time.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (time[mid] >= prefTime)
        {
            return mid;
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
    vector<int> time = {12, 13, 17, 21, 34, 55, 65, 76};
    int prefTime;

    cout << "Enter Your time: ";
    cin >> prefTime;

    int result = flight(time, prefTime);

    if (result != -1)
    {
        cout << "Prefarbale time is in index number  : " << result << " and th4 value is : " << time[result];
    }
    else
    {
        cout << " No fligt";
    }
}