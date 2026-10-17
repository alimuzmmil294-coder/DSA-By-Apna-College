#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "Enter a character: " << endl;
    cin >> alpha;

    cout << endl;
    if (alpha >= 'a' && alpha <= 'z')
    {
        cout << "" << alpha << " is a lowercase letter." << endl;
    }
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        cout << "" << alpha << " is an uppercase letter." << endl;
    }
    else
    {
        cout << "" << alpha << " is not a letter." << endl;
    }

    cout << endl;
    cout << "----------------------------------------" << endl;
    if (alpha >= 'a' && alpha <= 'z' || alpha >= 'A' && alpha <= 'Z')
    {
        cout << "" << alpha << " is a letter." << endl;
    }
    else
    {
        cout << "" << alpha << " is not a letter." << endl;
    }

    cout << endl;
    cout << "Terninary Operator: " << endl;
    alpha >= 'a' && alpha <= 'z' ? cout << "This is a lowercase letter." << endl : cout << "This is not a lowercase letter." << endl;
    cout << endl;
    cout << "While Loop: " << endl;

    int i = 0;
    while (i <= 10)
    {
        cout << i << ": This is a while loop." << endl;
        i++;
    }
    cout << endl;

    cout << "Do-While Loop: " << endl;
    int j = 20;
    do
    {
        cout << j << ": This is a do statement." << endl;
        j++;
    } while (j <= 10);

    cout << endl;
    cout << "For Loop: " << endl;
    // program to add numbers from 1 to n using for loop

    int n = 6;
    int sum = 0;

    for (int i = 1; i <= n; ++i)
        if (i % 2 != 0)
        {
            cout << " " << i << " is an odd number." << endl;
            sum += i; // sum = sum + i
        }

    // else
    // {
    //     sum += i; // sum = sum + i
    // }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    cout << endl;
    cout << "Sum of odd numbers from 1 to N, using while loop: " << endl;
    int N = 6;
    int newSum = 0;
    int f = 1;
    while (f <= N)
    {
        if (f % 2 == 0)
        {
            newSum += f;
        }
        f++;
    }
    cout << "The sum of while loop is : " << newSum << endl;

    cout << endl;

    cout << "Finding if a number is prime or not: \n";

    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool isPrime = true;
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }

    cout << "Hello, Muzammil Ali!";
    return 0;
}