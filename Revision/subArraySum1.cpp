#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[100], n, sum = 0, p = -1, q = -1, maxSubArray = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Generating Subarray

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            if (maxSubArray < sum)
            {
                maxSubArray = sum;
                p = i;
                q = j;
            }
            sum = 0;
        }
    }

    cout << maxSubArray << endl;
    for (int i = p; i <= q; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}