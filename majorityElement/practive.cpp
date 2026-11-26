#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Finds indices of two numbers in a SORTED array that add up to 'targt'
// Approach: Two-Pointer Technique | Time: O(n), Space: O(1)
vector<int> pairSum(vector<int> arr, int targt)
{
    vector<int> ans;
    int n = arr.size();
    int i = 0;     // Left pointer starting at the smallest element
    int j = n - 1; // Right pointer starting at the largest element

    while (i < j)
    {
        int sum = arr[i] + arr[j];

        if (sum < targt)
        {
            i++; // Sum is too small; move left pointer right to increase sum
        }
        else if (sum > targt)
        {
            j--; // Sum is too large; move right pointer left to decrease sum
        }
        else
        {
            // Target pair found; store indices and return immediately
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans; // Returns an empty vector if no valid pair exists
}

// Finds the majority element (appearing > n/2 times) using sorting
// Time: O(n log n), Space: O(1)
int majoOptimze(vector<int> arr)
{
    sort(arr.begin(), arr.end()); // Group identical elements together
    int freq = 1;
    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++; // Increment count for consecutive matching elements
        }
        else
        {
            // Reset count when encountering a new element
            freq = 1;
            ans = arr[i];
        }
        // Note: Typically, you check `if (freq > arr.size() / 2) return ans;` here
    }
    return ans;
}

// Finds the majority element using Boyer-Moore Voting Algorithm
// Assumes a majority element (> n/2 occurrences) always exists in the array
// Time: O(n), Space: O(1)
int mooreVoting(vector<int> arr)
{
    int candidate = 0;
    int count = 0;
    int ans = 0; // Unused variable

    for (int val : arr)
    {
        // Pick a new candidate whenever the previous candidate's votes cancel out
        if (count == 0)
        {
            candidate = val;
        }

        // Vote for the candidate if current value matches, otherwise cancel a vote
        if (candidate == val)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}

int main()
{
    // --- Test Case 1: Two-Pointer Pair Sum ---
    vector<int> arr = {-4, -4, -2, 0, 2, 4, 4, 6};
    int target = 0;
    vector<int> result = pairSum(arr, target);

    if (result.size() == 2)
    {
        cout << "The Pairsum indices : [ " << result[0] << "," << result[1] << " ]" << endl;
    }
    else
    {
        cout << "No Pair Found!" << endl;
    }

    // --- Test Case 2: Majority Element Algorithms ---
    // Note: In arr1 (size 12), no element appears > 6 times (3 appears 5x, 5 appears 5x),
    // so both majority functions will return inaccurate results for this specific input.
    vector<int> arr1 = {3, 3, 4, 2, 3, 5, 5, 5, 5, 3, 5, 3};
    cout << "the optimized majority element :" << majoOptimze(arr1) << endl;
    cout << "The Moore's Voting method: " << mooreVoting(arr1) << endl;

    cout << "Hello, Muzammil Ali!";
    return 0;
}   