#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {2, 3, 6, 4, 7, 8, 9, 5};

    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}