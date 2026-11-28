// Finds a pair with a requested sum in a sorted array using two pointers.
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    // Move inward from both ends because the input array is sorted.
    int n = arr.size();
    cout << n << '\n';
    int i = 0;
    int j = n - 1;
    vector<int> ans;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    // Demonstrate pairSum with a sorted sample array.
    vector<int> arr = {-10, -8, -2, -1, 2, 3, 4, 4, 5, 6, 7};
    int target = 15;

    vector<int> ans = pairSum(arr, target);
    if (ans.size() == 2)
    {
        cout << "Pair indices: [" << ans[0] << ", " << ans[1] << "]" << endl;
    }
    else
    {
        cout << "No pair found!" << endl;
    }
    cout << "Hello, Muzammil Ali!";
    cout << "Hello, Muzammil Ali!";
    return 0;
}
