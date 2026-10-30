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

int sumOfDigits(int num)
{
}
/**
 * Calculates the binomial coefficient (N choose R) using factorials.
 * Formula: C(N, R) = N! / (R! * (N - R)!)
 *
 * @param N Total number of items
 * @param R Number of items to choose
 * @return int The resulting combination value (returns 0 if input is invalid)
 */
int combination(int N, int R)
{
    // Step 1: Validate inputs to ensure R is within valid bounds (0 <= R <= N)
    if (N < R || N < 0 || R < 0)
    {
        cout << "Invalid input: R must be between 0 and N." << endl;
        return 0;
    }

    int totalN = 1;
    int totalR = 1;

    // Step 2: Calculate the factorial of N (N!)
    for (int i = 1; i <= N; i++)
    {
        totalN *= i;
    }
    cout << "The factorial of " << N << " is " << totalN << endl;

    // Step 3: Calculate the factorial of R (R!)
    for (int i = 1; i <= R; i++)
    {
        totalR *= i;
    }
    cout << "The factorial of " << R << " is " << totalR << endl;

    // Step 4: Calculate the factorial of (N - R)
    int totalSubR = 1;
    int subtractedR = N - R;
    for (int i = 1; i <= subtractedR; i++)
    {
        totalSubR *= i;
    }
    cout << "The factorial of N - R is :" << totalSubR << endl;

    // Step 5: Compute the denominator: R! * (N - R)!
    int multipliedRandN = totalR * totalSubR;
    cout << "The total N multiplied with R is :" << multipliedRandN << endl;
    cout << "N is :" << N << " and R is :" << R << endl;

    // Step 6: Compute the final combination result: N! / (R! * (N - R)!)
    int result = totalN / multipliedRandN;
    cout << "The final result is: " << result << endl;

    return result;
}



// Program entry point: demonstrates basic arithmetic and utility functions.
int main()
{
    // Example: add two numbers.
    // cout << add(5, 10);
    // add(29, 32);
    cout << endl;

    // Example: compare two numbers.
    // minOfTwo(29, 32);
    cout << endl;

    // Example: compute factorial.
    // Fact(5);

    combination(6, 2);
    cout << endl;

    cout << endl;

    // Final greeting.
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    return 0;
}