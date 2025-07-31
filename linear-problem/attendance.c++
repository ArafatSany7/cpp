#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int student[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(student) / sizeof(student[0]);
    int key;

    cout << "Enter the student roll for find : ";
    cin >> key;

    int *result = find(student, student + size, key);

    if (result != student + size)
    {
        int index = result - student;
        cout << "Attendenc found at index number : " << index;
    }
    else
        cout << "Absent";
}