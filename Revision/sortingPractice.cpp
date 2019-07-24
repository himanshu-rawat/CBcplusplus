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
    //Bubble Sort Algorithm

    // for (int i = 0; i < (n - 1); i++)
    // {
    //     int breakloop = 0;
    //     for (int j = 0; j < (n - 1 - i); j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //             breakloop = 1;
    //         }
    //     }
    //     if (breakloop == 0)
    //     {
    //         cout << "\ni =" << i << " and breaking the loop";
    //         break;
    //     }
    // }

    //Selection Sort
    // for (int i = 0; i < (n - 1); i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     if (minIndex != i)
    //     {
    //         swap(arr[minIndex], arr[i]);
    //     }
    // }

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
    cout << "\nSorting....\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
