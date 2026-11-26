#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, -8, 6, 4, -2, 3, -10, 7, 2, -1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // for (int strt = 0; strt < size; strt++)
    // {
    //     cout << strt << " ";
    //     for (int end = strt; end < size; end++)
    //     {
    //         cout << end;
    //         for (int i = strt; i <= end; i++)
    //         {
    //             cout << arr[i];

    //             if (i < end)
    //             {
    //                 cout << ",";
    //             }
    //         }
    //         cout << " | ";
    //     }
    //     cout << endl;
    // }
    int maxSum = arr[0];
    int currentSum = 0;
    int start = 0;
    int end = 0;
    int tempStart = 0;
    for (int i = 0; i < size; i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
            tempStart = i + 1;
        }
    }
    cout << "The maximum of subArray sum: " << maxSum << endl;
    cout << "The start of subArray: " << start << endl;
    cout << "The end of subArray: " << end << endl;
    cout << "The subArray sum is: [";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    int sum[5] = {1, 2, 3, 4, 5};
    int *ptr = sum;
    cout << *ptr << endl;
    cout << sum;

    cout << "Hello, Muzammil Ali!";
    return 0;
}