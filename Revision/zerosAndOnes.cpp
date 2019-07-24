#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your iNPUT\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int low, high, mid;
    low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
