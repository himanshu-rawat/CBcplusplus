#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[1000];
    int n, currentSum = 0, maxSum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        if (currentSum > maxSum)
        {
            maxSum = maxSum + currentSum;
        }
    }
    cout << maxSum;
}