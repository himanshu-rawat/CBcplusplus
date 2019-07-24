#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[10][10];
    int row, col, val = 1;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }
    // Transpose Of The Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //Reverse The Elements Of the Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == 0)
            {
                swap(arr[i][j], arr[i][col - 1]);
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}