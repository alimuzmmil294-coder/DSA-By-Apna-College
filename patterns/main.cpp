#include <iostream>
using namespace std;

int main()
{
    int n;

    // Pattern 1: Inverted star triangle (currently commented out).
    // The outer loop controls the rows, and the inner loop prints stars.
    cout << endl;

    // for (int i = 6; i >= 1; i--)
    // {
    //     for (int j = i; j < 6; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl; // Move to the next row.
    // }

    // Declare variables used in the alphabet patterns.
    cout << endl;
    int i, j;
    int num;

    cout << "Enter a number: ";
    // cin >> num; // Uncomment to take the pattern size from the user.

    // Pattern 2: Alphabet square (currently commented out).
    // Each row starts from 'A' and prints num consecutive letters.

    // for (i = 1; i <= num; i++)
    // {
    //     char ch = 'A'; // Reset the alphabet at the beginning of each row.
    //
    //     for (j = 1; j <= num; j++)
    //     {
    //         cout << ch << " ";
    //         ch++; // Move to the next character.
    //     }
    //
    //     cout << endl;
    // }

    // Pattern 3: Shrinking alphabet triangle (currently commented out).
    // Each row starts from 'A', but the number of letters decreases.

    // for (i = 1; i <= num; i++)
    // {
    //     char ch = 'A'; // Start every row with 'A'.
    //
    //     for (j = i; j <= num; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //
    //     cout << endl;
    // }

    // Pattern 4: Print consecutive numbers in a square pattern.
    cout << "Program for printing alphabets in pattern" << endl;

    int nmbr = 6; // Number of rows and columns in the square.
    cout << "Enter a number: ";
    // cin >> nmbr; // Uncomment to let the user choose the square size.

    int m = 1; // Initialize the counter used to print consecutive numbers.

    // Outer loop controls the rows.
    for (int i = 0; i < nmbr; i++)
    {
        // Inner loop controls the columns.
        for (int j = 0; j < nmbr; j++)
        {
            cout << m << " ";
            m++; // Increase the number after printing it.
        }

        cout << endl; // Start a new row.
    }

    // m contains the next number after all the numbers have been printed.
    cout << "The value of m is : " << m << endl;

    // Pattern 5: Print consecutive alphabets in a grid.
    // The character continues across rows because ch is declared outside both loops.
    cout << endl;

    int muz = 3; // Number of rows and columns.
    int c = 1;   // Reserved for a future pattern; currently unused.

    char ch = 'A'; // Start from 'A' and continue across all rows.

    for (int i = 0; i < muz; i++)
    {
        for (int j = 0; j < muz; j++)
        {
            cout << ch << " ";
            ch++; // Advance to the next character.
        }

        // Print one additional character after the inner loop.
        // This makes each row contain one extra character.
        cout << ch << endl;
    }

    // Pattern 6: Print an increasing alphabet triangle.
    // Letters continue from one row to the next instead of restarting at 'A'.
    n = 5;

    // Inverted star triangle (alternative pattern, currently commented out).
    // Each new row contains one fewer star than the previous row.

    // cout << endl;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    cout << endl;

    char ch1 = 'A'; // Initialize the character counter before the loops.

    // Outer loop determines the row number.
    for (int i = 1; i <= n; i++)
    {
        // Print i characters in the current row.
        for (int j = 1; j <= i; j++)
        {
            cout << ch1 << " ";
            ch1++; // Continue with the next alphabet.
        }

        cout << endl; // Move to the next row.
    }

    // Pattern 7: Print partial multiplication tables.
    // Row i prints the multiplication table for i from 1 through i.
    cout << endl;

    n = 4; // Number of multiplication tables to print.

    for (int i = 1; i <= n; i++)
    {
        // Print multipliers from 1 up to the current table number.
        for (int j = 1; j <= i; j++)
        {
            cout << i << " * " << j << " = " << i * j << "\n";
        }

        cout << endl; // Separate the tables with a blank line.
    }

    // Pattern 8: Print the complete multiplication table of n.
    // Also calculate the sum of all multiplication results.
    int sum = 0; // Initialize the sum before adding any products.

    for (int i = 1; i <= 10; i++)
    {
        // Print n multiplied by each number from 1 through 10.
        cout << n << " * " << i << " = " << n * i << "\n";

        sum += n * i; // Add the current product to the total sum.
    }

    cout << "Sum of the multiplication table: " << sum << endl;

    // Pattern 9: Print the same alphabet repeatedly in each row.
    // The letter changes when the outer loop moves to the next row.
    n = 5;

    // i goes from 0 through n, so this produces n + 1 rows.
    for (int i = 0; i <= n; i++)
    {
        char chr = 'A' + i; // Select the row's letter: A, B, C, and so on.

        // Print the selected letter i + 1 times.
        for (int j = 0; j <= i; j++)
        {
            cout << chr << " ";
        }

        cout << endl;
    }

    // Pattern 10: Print a triangle of consecutive numbers.
    // The counter nmbr is shared by every row and never resets.
    n = 5;
    nmbr = 1; // Reset the number counter before starting this pattern.

    for (int i = 0; i < n; i++)
    {
        // Print i numbers in the current row.
        // The first row prints zero numbers because i starts at 0.
        for (int j = i; j >= 1; j--)
        {
            cout << nmbr << " ";
            nmbr++; // Move to the next number.
        }

        cout << endl;
    }

    // Pattern 11: Print a right-aligned number pattern.
    // Leading spaces shift each row to the right.
    cout << endl;

    n = 4;
    int nm = 1; // Counter currently incremented but not used for printing.

    for (int i = 0; i <= n; i++)
    {
        // Print leading spaces to shift the row.
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Print the current row number i + 1, n - i times.
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1);
        }

        nm++; // Increment the unused counter.
        cout << endl;
    }

    // Pattern 12: An unfinished number-pattern attempt.
    // The original loop is commented out because the pattern is incomplete.
    n = 5;
    nm = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     // Print leading spaces for alignment.
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //
    //     // Attempt to print numbers in the row.
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         cout << n;
    //     }
    //
    //     cout << endl;
    // }

    // Pattern 13: Print a centered alphabet triangle.
    // Each row repeats one letter, and the letter advances with the row.
    n = 6;
    num = 1; // Currently unused in this pattern.

    for (int i = 0; i <= n; i++)
    {
        // Print leading spaces before the letters.
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        char ch = 'A' + i; // Determine the letter for the current row.

        // Print the letter i times.
        for (int j = 1; j <= i; j++)
        {
            cout << ch;

            // Alternative experiments:
            // cout << i;
            // ch = ch + i;
        }

        // ch++; // Not needed because ch is recalculated in each row.
        cout << endl;
    }

    // Pattern 14: Print the descending half of the alphabet pattern.
    // The letter moves backward from F to A as the rows get shorter.
    cout << endl;

    for (int i = n; i > 0; i--)
    {
        char ch = 'A' + i - 1; // Select the letter for the current row.

        // Print leading spaces to align the pattern.
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        // Repeat the current letter i times.
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }

        cout << endl;
    }

    // Pattern 15: Print a centered numeric pyramid.
    // Each row prints ascending digits followed by descending digits.
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int numberOfSpaces = n - i - 1; // Calculate the leading spaces.

        // Print spaces before the numbers to center the row.
        for (int j = 1; j <= numberOfSpaces; j++)
        {
            cout << " ";
        }

        // Print ascending numbers from 1 through i.
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            // i++; // Do not increment i here; the outer loop controls rows.
        }

        // Print descending numbers from i - 1 back to 1.
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    // Pattern 16: Print the upper half of a large diamond-like star pattern.
    n = 100;

    // TOP HALF:
    // Each row prints increasing numbers of stars on both sides.
    // Spaces between the two star groups create the central gap.
    for (int i = 1; i <= n; i++)
    {
        // Print the left group of i stars.
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            // j++; // Do not increment j manually; the for loop does this.
        }

        // Print spaces after the left group.
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print additional spaces to create the gap between the groups.
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // Print the right group of i stars.
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
            // j++; // Do not increment j manually.
        }

        cout << endl; // Finish the current row.
    }

    // BOTTOM HALF:
    // Print decreasing star groups on the left, followed by spaces
    // and two star groups on the right.
    for (int i = n; i >= 1; i--)
    {
        // Print the left group of i stars.
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
            // j++; // The loop automatically decreases j.
        }

        // Print spaces after the left group.
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print additional spaces between the star groups.
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // Print the first right-hand group of i stars.
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            // j++; // Do not increment j manually.
        }

        // Print a second right-hand group of i stars.
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
            // j++; // The loop automatically increments j.
        }

        cout << endl; // Finish the current row.
    }

    return 0; // Return 0 to indicate successful program execution.
}