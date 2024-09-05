#include <iostream>

using namespace std;

void callbyValue(int, int);
void callbyRefrence(int *, int *);

int main()
{
    int a, b;
    cout << "Enter the numbers" << endl;
    cin >> a >> b;

    callbyValue(a, b);
    cout << "main fun " << a << " " << b << endl;
    callbyRefrence(&a, &b);
    cout << "main fun " << a << " " << b << endl;

    return 0;
}

void callbyValue(int a, int b)
{
    int tem = a;
    a = b;
    b = tem;
    cout << "Call by value fun " << a << " " << b << endl;
    return;
}

void callbyRefrence(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
    cout << "Call by value fun " << *a << " " << *b << endl;
    return;
}