#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "You Input" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Sorting...." << endl;
    for (int i = 0; i < (n - 1); i++)
    {
        int currentIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[currentIndex])
            {
                currentIndex = j;
            }
        }
        swap(arr[i], arr[currentIndex]);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "AFTER SORT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
