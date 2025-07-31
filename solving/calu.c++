#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation:\n";
    cout << "+ : Addition\n";
    cout << "- : Subtraction\n";
    cout << "* : Multiplication\n";
    cout << "/ : Division\n";
    cout << "% : Percentage (num1% of num2)\n";
    cout << "s : Sine (sin(num1) in degrees)\n";
    cout << "c : Cosine (cos(num1) in degrees)\n";
    cout << "t : Tangent (tan(num1) in degrees)\n";
    cout << "S : Secant (sec(num1) in degrees)\n";
    cout << "C : Cosecant (cosec(num1) in degrees)\n";
    cout << "T : Cotangent (cot(num1) in degrees)\n";

    cout << "Enter operator: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error! Division by zero is not allowed." << endl;
        }
        break;
    case '%':
        cout << "Percentage: " << (num1 * num2) / 100 << "%" << endl;
        break;
    case 's':
        cout << "sin(" << num1 << ") = " << sin(num1 * M_PI / 180) << endl;
        break;
    case 'c':
        cout << "cos(" << num1 << ") = " << cos(num1 * M_PI / 180) << endl;
        break;
    case 't':
        cout << "tan(" << num1 << ") = " << tan(num1 * M_PI / 180) << endl;
        break;
    case 'S':
    {
        double cos_val = cos(num1 * M_PI / 180);
        if (cos_val != 0)
            cout << "sec(" << num1 << ") = " << 1 / cos_val << endl;
        else
            cout << "Error! sec(" << num1 << ") is undefined." << endl;
        break;
    }
    case 'C':
    {
        double sin_val = sin(num1 * M_PI / 180);
        if (sin_val != 0)
            cout << "cosec(" << num1 << ") = " << 1 / sin_val << endl;
        else
            cout << "Error! cosec(" << num1 << ") is undefined." << endl;
        break;
    }
    case 'T':
    {
        double tan_val = tan(num1 * M_PI / 180);
        if (tan_val != 0)
            cout << "cot(" << num1 << ") = " << 1 / tan_val << endl;
        else
            cout << "Error! cot(" << num1 << ") is undefined." << endl;
        break;
    }
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}