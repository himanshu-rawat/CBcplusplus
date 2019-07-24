#include <iostream>
using namespace std;
int *CreateAndDisplay(int n)
{
    cout << "Creating Array..." << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
}
int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "Found At Index = " << mid;
            break;
        }
        if (arr[mid] < key)
        {
            end = mid - 1;
        }
        if (arr[mid] > key)
        {
            start = mid + 1;
        }
    }
    if (start > end)
    {
        cout << "Element Not Found";
    }
}

int main()
{
    int n, key;
    cin >> n;
    int *arr = CreateAndDisplay(n);
    cout << "Enter Key To Search\n";
    cin >> key;
    int result = BinarySearch(arr, n, key);
    return 0;
}
