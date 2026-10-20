#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i, j;

    // Program for printing characters in the triangle pattern
    for (i = 0; i < n; i++)
    {
        char ch = 'A';
        for (j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    cout << endl;
    // Program for printing characters in the triangle pattern

    for (i = 0; i < n; i++)
    {
        char ch = 'A';
        for (j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;
    // Program for printing characters in the triangle pattern

    for (i = 0; i < n; i++)
    {
        char ch = 'A';
        for (j = 0; j < n - i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl;
    // Program for printing characters in the triangle pattern
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    cout<<"Hello, World!"<<endl;

    

    cout << "Hello, Muzammil Ali!";
    return 0;
}