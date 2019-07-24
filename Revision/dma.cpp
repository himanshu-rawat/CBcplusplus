#include <iostream>
using namespace std;
int main()
{
    // Creating 2D Array Dynamically
    int row, col;
    cin >> row >> col;
    // Allocating Space
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    int counter = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = ++counter;
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // int *val = new int(20);
    // *val = 10;
    // cout << *val << endl;
    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = i * i;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }
    // delete val;
    // delete[] arr;
    // cout << "After DELETE " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}
