#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {2, -1, 3, 4, 5};

    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < 5; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Maximum SubArray Sum is : " << maxSum << endl;
}
