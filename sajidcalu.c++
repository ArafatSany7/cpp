#include <iostream>
#include <cmath>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return NAN;
    }
    return a / b;
}

int main()
{
    std::cout << "Calculator Menu:\n";
    std::cout << "1. sin\n";
    std::cout << "2. cos\n";
    std::cout << "3. tan\n";
    std::cout << "4. cot\n";
    std::cout << "5. sec\n";
    std::cout << "6. cosec\n";
    std::cout << "7. +\n";
    std::cout << "8. -\n";
    std::cout << "9. *\n";
    std::cout << "10. /\n";
    std::cout << "11. %\n";
    std::cout << "12. square\n";
    std::cout << "13. square root\n";
    std::cout << "14. natural log\n";
    std::cout << "15. log base 10\n";

    int ch = 0;
    std::cout << "Choose operation (1-15): ";
    std::cin >> ch;

    int x = 0, y = 0;
    double res = 0.0;

    if (ch >= 1 && ch <= 6)
    {
        cout << "Input x: ";
        cin >> x;
        double rad = x * M_PI / 180.0;
        if (ch == 1)
        {
            res = sin(rad);
            cout << "sin(rad) = " << res;
        }
        else if (ch == 2)
        {
            res = cos(rad);
            cout << "cos(rad) = " << res;
        }
        else if (ch == 3)
        {
            res = tan(rad);
            cout << "tan(rad) = " << res;
        }
        else if (ch == 4)
        {
            if (tan(rad) == 0)
                cout << "Error: cotangent undefined (tan(rad) = 0)!" << endl;
            else
            {
                res = 1.0 / tan(rad);
                cout << "cot(rad) = " << res;
            }
        }
        else if (ch == 5)
        {
            if (cos(rad) == 0)
                cout << "Error: secant undefined (cos(rad) = 0)!" << endl;
            else
            {
                res = 1.0 / cos(rad);
                cout << "sec(rad) = " << res;
            }
        }
        else if (ch == 6)
        {
            if (sin(rad) == 0)
                cout << "Error: cosecant undefined (sin(rad) = 0)!" << endl;
            else
            {
                res = 1.0 / sin(rad);
                cout << "cosec(rad) = " << res;
            }
        }
    }
    else if (ch >= 7 && ch <= 10)
    {
        cout << "Input x: ";
        cin >> x;
        cout << "Input y: ";
        cin >> y;
        switch (ch)
        {
        case 7:
            res = add(x, y);
            cout << "x+y = " << res;
            break;
        case 8:
            res = subtract(x, y);
            cout << "x-y = " << res;
            break;
        case 9:
            res = multiply(x, y);
            cout << "x*y = " << res;
            break;
        case 10:
            res = divide(x, y);
            if (!isnan(res))
                cout << "x/y = " << res;
            break;
        }
    }
    else if (ch == 11)
    {
        cout << "Input x: ";
        cin >> x;
        cout << "Input y: ";
        cin >> y;
        if (y == 0)
            cout << "Error: Modulo by zero!" << endl;
        else
        {
            res = x % y;
            cout << "x%y = " << res;
        }
    }
    else if (ch >= 12 && ch <= 15)
    {
        cout << "Input x: ";
        cin >> x;
        if (ch == 12)
        {
            res = (double)x * x;
            cout << "x^2 = " << res;
        }
        else if (ch == 13)
        {
            if (x < 0)
                cout << "Error: Square root of negative number!" << endl;
            else
            {
                res = sqrt(x);
                cout << "sqrt(x) = " << res;
            }
        }
        else if (ch == 14)
        {
            if (x <= 0)
                cout << "Error: Logarithm of non-positive number!" << endl;
            else
            {
                res = log(x);
                cout << "ln(x) = " << res;
            }
        }
        else if (ch == 15)
        {
            if (x <= 0)
                cout << "Error: Logarithm of non-positive number!" << endl;
            else
            {
                res = log10(x);
                cout << "log10(x) = " << res;
            }
        }
    }
    else
    {
        cout << "Invalid operation!" << endl;
    }
    return 0;
}
