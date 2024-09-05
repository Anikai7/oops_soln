#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char oper;

    cout << "Enter operation: ";
    cin >> oper;
    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;

    if (oper == '+')
    {
        cout << num1 + num2;
    }
    else if (oper == '-')
    {
        cout << num1 - num2;
    }
    else if (oper == '/')
    {
        if (num2 != 0)
        {
            cout << num1 / num2;
        }
        else
        {
            cout << "Zero Error" << endl;
        }
    }
    else if (oper == '*')
    {
        cout << num1 * num2;
    }
    else if (oper == '%')
    {
        if (num2 != 0)
        {
            cout << int(num1) % int(num2);
        }
        else
        {
            cout << "Zero Error" << endl;
        }
    }
    else
    {
        cout << "Operation Error";
    }

    return 0;
}