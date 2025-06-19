#include <iostream>
#include <cmath>
using namespace std;

double calculate(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return (a / 100.0) * b;
    case 's':
        return sin(a * M_PI / 180);
    case 'c':
        return cos(a * M_PI / 180);
    case 't':
        return tan(a * M_PI / 180);
    case 'S':
        return 1 / cos(a * M_PI / 180);
    case 'C':
        return 1 / sin(a * M_PI / 180);
    case 'T':
        return 1 / tan(a * M_PI / 180);
    default:
        return NAN;
    }
}

int main()
{
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operation (+, -, *, /, %, s, c, t, S, C, T): ";
    cin >> op;

    double result = calculate(num1, num2, op);
    if (!isnan(result))
        cout << "Result: " << result << endl;
    else
        cout << "Invalid operation!" << endl;

    return 0;
}
