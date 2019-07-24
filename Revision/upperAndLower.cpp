#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    // Lower Bound
    int start = 0, end = n - 1, lowerbound = -1, upperbound = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            // lowerbound = mid;
            // end = mid - 1;
            upperbound = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    // cout << "LowerBOund = " << lowerbound;
    cout << "UpperBound=" << upperbound << endl;
}
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int find = BinarySearch(arr, n, key);
    return 0;
}
