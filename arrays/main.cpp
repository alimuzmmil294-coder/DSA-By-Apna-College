#include <iostream>
using namespace std;
int main()
{
    int num[5] = {1, 10, 1, -6, 30};
    int largest = num[0], smallest = num[0];
    int sInd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
            sInd = i;
        }
    }
    cout << "The smallest value is : " << smallest << endl;
    cout << "The Index of smallest value is : " << sInd << endl;
    cout << endl;
    cout << endl;

    int lInd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            lInd = i;
        }
    }
    cout << "The largest value is : " << largest << endl;
    cout << "The Index of largest value is : " << lInd << endl;

    cout << "Hello, Muzammil Ali!";
    return 0;
}