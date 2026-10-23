#include <iostream>
using namespace std;

int main()
{
    int n;

    // Pattern 1 (commented out): print a star triangle with fewer stars per row.
    cout << endl;
    // for (int i = 6; i >= 1; i--)
    // {
    //     for (int j = i; j < 6; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Shared input value for the alphabet-pattern examples below.
    cout << endl;
    int i, j;
    int num;
    cout << "Enter a number: ";
    // cin >> num;

    // Pattern 2 (commented out): restart at A on each row to form an alphabet square.
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

    // Pattern 3 (commented out): print a shrinking alphabet row, restarting at A each time.
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

    // Pattern 4: fill a square grid with numbers that continue across row boundaries.
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

    // Pattern 5: continue the alphabet across the grid; the statement after the inner
    // loop also prints the next character, so each row has one extra character.
    cout << endl;
    int muz = 3;
    int c = 1; // Reserved for a future pattern; not used in this example.

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

    // Pattern 6: print a triangle whose letters continue from one row to the next.
    n = 5;
    // cout << "Enter a number: ";
    // cin >> n;

    cout << endl;

    // Inverted star triangle (commented out): each successive row contains fewer stars.
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

    // Print a partial multiplication table for each number from 1 through n.
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

    // Print the full 1-through-10 table for n and accumulate its products.
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << " \n";
        sum += n * i; // Add each result to the sum
    }

    cout << "Sum of the multiplication table: " << sum << endl;
    // Repeat each row's letter, increasing that letter on the next row.
    n = 5;
    for (int i = 0; i <= n; i++) // Loops continues until i = 5;
    {
        char chr = 'A' + i; // Select the letter for this row: A, then B, then C, and so on.
        for (int j = 0; j <= i; j++)
        {
            cout << chr << " ";
        }
        cout << endl;
    }

    // Print a rising number triangle using one counter shared by all rows.
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

    // Print a right-aligned pattern: add leading spaces, then repeat the row number.
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

    // An unfinished number-pattern attempt, retained as a commented example.
    n = 5;
    nm = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     // Spaces;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     // nmbrs
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         cout << n;
    //     }
    // }

    // Print each row's letter repeatedly, with the letter advancing by row.
    n = 6;
    num = 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        char ch = 'A' + i;
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            // cout << i;
            // ch = ch + i;
        }
        // ch++;
        cout << endl;
    }

    // Print the matching descending half, moving from F back toward A.
    cout << endl;
    for (int i = n; i > 0; i--)
    {
        char ch = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    // Print a centered numeric pyramid: ascending digits to the middle, then descending.
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        int numberOfSpaces = n - i - 1;
        for (int j = 1; j <= numberOfSpaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            // i++;
        }
        // cout << " ";
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    n = 100;
    // top
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // cout << "First :";
            cout << "*";
            // j++;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            // cout << "Second :";
            cout << "*";
            // j++;
        }
        cout << endl;
    }

    // Bottom

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            // cout << "First :";
            cout << "*";
            // j++;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            // cout << "Second :";
            cout << "*";
            // j++;
        }

        for (int j = 1; j <= i; j++)
        {
            // cout << "Second :";
            cout << "*";
            // j++;
        }
        cout << endl;
    }

    return 0; // End the program
}
