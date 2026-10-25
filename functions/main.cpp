#include <iostream>
using namespace std;

// Adds two numbers and prints the result.
double add(double a, double b)
{
    cout << a + b;
}

// Prints the smaller of two integers.
int minOfTwo(int a, int b)
{
    if (a < b)
    {
        cout << a << " :is smallers than :" << b << endl;
    }
    else
    {
        cout << b << " :is smallers than :" << a << endl;
    }
}

// Calculates the factorial of a number and prints it.
int Fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is " << fact << endl;
    ;
}

int sumOfDigits(int num){
    
}

// Program entry point: demonstrates basic arithmetic and utility functions.
int main()
{
    // Example: add two numbers.
    // cout << add(5, 10);
    add(29, 32);
    cout << endl;

    // Example: compare two numbers.
    minOfTwo(29, 32);
    cout << endl;

    // Example: compute factorial.
    Fact(5);
    cout << endl;

    // Final greeting.
    cout << "Hello, Muzammil Ali!";
    return 0;
}