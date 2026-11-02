#include <iostream>
using namespace std;

int main()
{
    // Find the smallest and largest values in this array and their indices.
    int num[5] = {1, 10, 1, -6, 30};

    // Initialize the minimum and maximum from the first element.
    int largest = num[0], smallest = num[0];
    int sInd = 0;

    // Track the smallest value and its index.
    for (int i = 0; i < 5; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
            sInd = i;
        }
    }

    // Display the smallest value and its index.
    cout << "The smallest value is : " << smallest << endl;
    cout << "The Index of smallest value is : " << sInd << endl;
    cout << endl;
    cout << endl;

    int lInd = 0;

    // Track the largest value and its index.
    for (int i = 0; i < 5; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            lInd = i;
        }
    }

    // Display the largest value and its index.
    cout << "The largest value is : " << largest << endl;
    cout << "The Index of largest value is : " << lInd << endl;

    // Print a greeting before exiting.
    cout << "Hello, Muzammil Ali!";
    return 0;
}