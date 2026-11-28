// Minimal program used as an introduction to execution time and memory usage.
#include <iostream>
using namespace std;
int main()
{
    // O(1) - Constant time complexity
    int n = 10;                // Example input
    int ans = n * (n + 1) / 2; // O(1) - Constant time complexity
    cout << "The sum of first " << n << " natural numbers is: " << ans << endl;

    // The program performs constant work and prints one greeting.
    cout << "Hello, Muzammil Ali!";
    return 0;
}
