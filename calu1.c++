#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /, %, s, c, t, S, C, T): ";
    cin >> operation;

    if (operation == '+')
        cout << "Result: " << num1 + num2 << endl;
    else if (operation == '-')
        cout << "Result: " << num1 - num2 << endl;
    else if (operation == '*')
        cout << "Result: " << num1 * num2 << endl;
    else if (operation == '/')
        cout << "Result: " << num1 / num2 << endl;
    else if (operation == '%')
        cout << "Result: " << (num1 / 100.0) * num2 << endl;
    else if (operation == 's')
        cout << "Result: " << sin(num1 * M_PI / 180) << endl;
    else if (operation == 'c')
        cout << "Result: " << cos(num1 * M_PI / 180) << endl;
    else if (operation == 't')
        cout << "Result: " << tan(num1 * M_PI / 180) << endl;
    else if (operation == 'S')
        cout << "Result: " << 1 / cos(num1 * M_PI / 180) << endl;
    else if (operation == 'C')
        cout << "Result: " << 1 / sin(num1 * M_PI / 180) << endl;
    else if (operation == 'T')
        cout << "Result: " << 1 / tan(num1 * M_PI / 180) << endl;
    else
        cout << "Invalid operation!" << endl;

    return 0;
}
