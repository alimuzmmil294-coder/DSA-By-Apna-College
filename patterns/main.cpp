#include <iostream>
using namespace std;

int main()
{
    int n;

    // Pattern 1: Increasing star triangle
    cout << endl;
    // for (int i = 6; i >= 1; i--)
    // {
    //     for (int j = i; j < 6; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Input for alphabet patterns
    cout << endl;
    int i, j;
    int num;
    cout << "Enter a number: ";
    // cin >> num;

    // Pattern 2: Repeating alphabet square
    // for (i = 1; i <= num; i++)
    // {
    //     char ch = 'A'; // Reset alphabet at each row
    //     for (j = 1; j <= num; j++)
    //     {
    //         cout << ch << " ";
    //         ch++; // Move to the next alphabet
    //     }
    //     cout << endl;
    // }

    // Pattern 3: Decreasing alphabet triangle
    // for (i = 1; i <= num; i++)
    // {
    //     char ch = 'A'; // Start each row from A
    //     for (j = i; j <= num; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Pattern 4: Continuous number grid
    cout << "Program for printing alphabets in pattern" << endl;
    int nmbr = 6;
    cout << "Enter a number: ";
    // cin >> nmbr;

    int m = 1; // Starting number

    for (int i = 0; i < nmbr; i++) // Rows
    {
        for (int j = 0; j < nmbr; j++) // Columns
        {
            cout << m << " ";
            m++; // Continue counting across rows
        }
        cout << endl;
    }

    cout << "The value of m is : " << m << endl;

    // Pattern 5: Continuous alphabet grid
    cout << endl;
    int muz = 3;
    int c = 1; // Currently unused

    char ch = 'A'; // Initialize once to continue across rows

    for (int i = 0; i < muz; i++)
    {
        for (int j = 0; j < muz; j++)
        {
            cout << ch << " ";
            ch++; // Move to the next alphabet
        }

        cout << ch << endl; // Prints one extra alphabet
    }

    // Pattern 6: Continuous alphabet triangle
    n = 5;
    // cout << "Enter a number: ";
    // cin >> n;

    cout << endl;

    // Inverted star triangle
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    char ch1 = 'A'; // Continue alphabets across all rows

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch1 << " ";
            ch1++;
        }
        cout << endl;
    }

    // Print multiplication tables up to n
    cout << endl;
    // cout << "Enter a number: ";
    // cin >> n;
    n = 4;

    for (int i = 1; i <= n; i++) // Table number
    {
        for (int j = 1; j <= i; j++) // Multipliers for each row
        {
            cout << i << " * " << j << " = " << i * j << " \n";
        }
        cout << endl;
    }

    // Calculate the sum of the selected number's multiplication table
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << " \n";
        sum += n * i; // Add each result to the sum
    }

    cout << "Sum of the multiplication table: " << sum << endl;
    n = 5;
    for (int i = 0; i <= n; i++) // Loops continues until i = 5;
    {
        char chr = 'A' + i; // Initially chr store A, => then B, => then C until j = i;
        for (int j = 0; j <= i; j++)
        {
            cout << chr << " ";
        }
        cout << endl;
    }

    n = 5;
    nmbr = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << nmbr << " ";
            nmbr++;
        }
        cout << endl;
    }

    cout << endl;
    n = 4;
    int nm = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1);
        }

        nm++;
        cout << endl;
    }

    n = 5;
    nm = 1;

    for (int i = 0; i < n; i++)
    {
        // Spaces;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // nmbrs
        for (int j = 0; j < n - 1; j++)
        {
            cout<< n; 
        }
    }

    return 0; // End the program
}
