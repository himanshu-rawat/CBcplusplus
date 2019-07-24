#include <iostream>
using namespace std;

int main()
{
    int arr[100], cumSum[100] = {0};
    int n, left = -1, right = -1, currentSum = 0, sum = -1;
    cin >> n;
    cin >> arr[0];
    cumSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        cumSum[i] = cumSum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << cumSum[i] << " ";
    }
    cout << "END" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = cumSum[j] - cumSum[i - 1];
            cout << "The Value Of i=" << i << " and j=" << j << " currentSum=" << currentSum << endl;
            if (currentSum > sum)
            {
                sum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout << sum;
    return 0;
}