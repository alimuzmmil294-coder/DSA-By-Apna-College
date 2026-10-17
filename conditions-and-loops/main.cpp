#include <iostream>
using namespace std;

int main()
{
    // Example of conditional statements using a character input.
    char alpha;
    cout << "Enter a character: " << endl;
    cin >> alpha;

    cout << endl;

    // Check whether the entered character is lowercase.
    if (alpha >= 'a' && alpha <= 'z')
    {
        cout << alpha << " is a lowercase letter." << endl;
    }
    // Check whether the entered character is uppercase.
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        cout << alpha << " is an uppercase letter." << endl;
    }
    // If it is neither uppercase nor lowercase, it is not a letter.
    else
    {
        cout << alpha << " is not a letter." << endl;
    }

    cout << endl;
    cout << "----------------------------------------" << endl;

    // Another way to check if the character is a letter.
    if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
        cout << alpha << " is a letter." << endl;
    }
    else
    {
        cout << alpha << " is not a letter." << endl;
    }

    cout << endl;
    cout << "Ternary Operator: " << endl;

    // Ternary operator: expression ? true_result : false_result.
    alpha >= 'a' && alpha <= 'z' ? cout << "This is a lowercase letter." << endl : cout << "This is not a lowercase letter." << endl;

    cout << endl;
    cout << "While Loop: " << endl;

    // while loop keeps running as long as the condition is true.
    int i = 0;
    while (i <= 10)
    {
        cout << i << ": This is a while loop." << endl;
        i++;
    }
    cout << endl;

    cout << "Do-While Loop: " << endl;

    // do-while loop executes at least once before checking the condition.
    int j = 20;
    do
    {
        cout << j << ": This is a do statement." << endl;
        j++;
    } while (j <= 10);

    cout << endl;
    cout << "For Loop: " << endl;

    // This for loop prints odd numbers from 1 to n and adds them to the sum.
    int n = 6;
    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (i % 2 != 0)
        {
            cout << " " << i << " is an odd number." << endl;
            sum += i; // sum = sum + i
        }
    }

    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    cout << endl;
    cout << "Sum of odd numbers from 1 to N, using while loop: " << endl;

    // While loop to calculate the sum of even numbers from 1 to N.
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

    // Prime number check using a loop.
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

    cout << endl;

    // Calculate the sum of all numbers divisible by 3 up to a given number.
    cout << "Sum of all numbers that are divisible by 3: \n \n";

    int number = 4;
    int totalSum = 0;

    for (int i = 0; i <= number; i++)
    {
        if (i % 3 == 0)
        {
            totalSum += i;
        }
    }

    cout << "The sum of all numbers that are divisible by 3 is: " << totalSum << endl;
    cout << "Hello, Muzammil Ali!";
    return 0;
}