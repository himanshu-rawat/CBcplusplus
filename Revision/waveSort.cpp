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
    cout << "You Input\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nWave Sort\n"
         << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > arr[i + 1])
    //     {
    //         cout << arr[i] << " " << arr[i + 1] << endl;
    //     }
    //     else
    //     {
    //         cout << arr[i + 1] << " " << arr[i] << endl;
    //     }
    //     i++;
    // }
    for (int i = 0; i < n; i = i + 2)
    {
        if (i > 0 && arr[i - 1] > arr[i])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (i < n - 1 && arr[i + 1] > arr[i])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
