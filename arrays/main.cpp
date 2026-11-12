#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int first = 10;
    int second = 20;
    int third = 30;

    {
        int third = second - first;
        cout << third << endl;
    }

    cout << "The value of third is: " << third << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 5;

    cout << "Index of " << target << " is: " << linearSearch(arr, size, target) << endl;

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

    int arr1[5] = {1, 2, 3, 2, 1};
    int start = arr1[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] == start)
        {
            cout << "The value is: " << arr1[i] << endl;
        }
    };

    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    // Print a greeting before exiting.
    return 0;
}