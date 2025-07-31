#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string list[] = {"Modu", "Jodu", "Kodu", "karim", "rahim"};
    int size = sizeof(list) / sizeof(list[0]);
    string name;

    cout << "Kare chai : ";
    cin >> name;

    string *phone = find(list, list + size, name);

    if (phone != list + size)
    {
        int index = phone - list;
        cout << "Index found at number : " << index;
    }
    else
    {
        cout << "Nam nai";
    }
}