#include <iostream>
using namespace std;
int main()
{
    // int size = 5;
    // for (int start = 0; start < size; start++)
    // {
    //     int currentSum = 0;
    //     for (int end = start; end < size; end++)
    //     {
    //         currentSum += arr[end];
    //         maxSum = max(maxSum, currentSum);
    //     }
    //     cout << endl;
    // }

    // for (int val : num)
    // {
    //     int currentSum = 0;
    //     currentSum += val;
    //     MaxSum = max(MaxSum, currentSum);
    //     if (currentSum < 0)
    //     {
    //         currentSum = 0;
    //     }
    // }
    // cout << "Maximum sum is: " << MaxSum << endl;

    // cout << "The maximum sum is: " << maxSum << endl;

    // Pratice of Kadane's Algorithm & Brute Force Algorithm for Maximum Subarray Sum Problem

    int arr1[] = {2, 4, -1, 5, -3};
    int size = 5;

    for (int strt = 0; strt < size; strt++)
    {
        for (int end = strt; end < size; end++)
        {
            for (int i = strt; i <= end; i++)
            {
                cout << arr1[i];

                if (i < end)
                {
                    cout << ", ";
                }
            }

            cout << " | ";
        }

        cout << endl;
    }
    // Maximum Sum of SubArrays
    int maxSum = arr1[0];
    for (int val : arr1)
    {
        int currentSum = 0;
        currentSum += val;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The maximum sum in arr1 is: " << maxSum << endl;
    cout << endl;
    cout << "This is the area of arr2, don't you dare to enter!" << endl;
    int arr2[] = {-8, -3, -6, -2, -5, -4};
    size = 6;
    for (int strt = 0; strt < size; strt++)
    {
        for (int end = strt; end < size; end++)
        {
            for (int i = strt; i <= end; i++)
            {
                cout << arr2[i];
                if (i < end)
                {
                    cout << ",";
                }
            }
            cout << " | ";
        }
        cout << endl;
    }

    maxSum = arr2[0];
    int currentSum = 0;
    for (int val : arr2)
    {
        currentSum += val;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The Maximum sum of arr2 is : " << maxSum << endl;

    cout << endl;
    cout << "This is the area of arr3, don't you dare to enter!" << endl;
    int arr3[] = {-8, -3, -6, -2, -5, -4};
    size = 6;
    for (int str = 0; str < size; str++)
    {
        for (int end = str; end < size; end++)
        {
            for (int i = str; i <= end; i++)
            {
                cout << arr3[i];
                if (i < end)
                {
                    cout << ",";
                }
            }
            cout << " | ";
        }
        cout << endl;
    }

    maxSum = arr3[0];
    currentSum = 0;
    for (int val : arr3)
    {
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The Maximum Sum of Arr3 is : " << maxSum << endl;

    cout << endl;
    cout << "This is the area of arr4, don't you dare to enter!" << endl;
    int arr4[] = {3, -1, 4, -1, 2, -5, 6, -2, 3, -1};
    size = 10;
    for (int strt = 0; strt < size; strt++)
    {
        for (int end = strt; end < size; end++)
        {
            for (int i = strt; i <= end; i++)
            {
                cout << arr4[i];
                if (i < end)
                {
                    cout << ",";
                }
            }
            cout << " | ";
        }
        cout << endl;
    }

    maxSum = arr4[0];
    for (int val : arr4)
    {
        int currentSum = 0;
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "The maximum subArray sum in arr4 is: " << maxSum << endl;

    cout << "Hello, Muzammil Ali!";
    return 0;
}