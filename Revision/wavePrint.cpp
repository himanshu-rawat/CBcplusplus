#include <iostream>
using namespace std;
int main()
{
    int matrix[10][10];
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //Wave Print
    //First Method
    // for (int i = 0; i < row; i++)
    // {
    //     int sec = row - 1;
    //     for (int j = 0; j < col; j++)
    //     {

    //         if (i % 2 == 0)
    //         {
    //             cout << matrix[j][i] << " ";
    //         }
    //         else
    //         {
    //             // cout << endl
    //             //      << "sec = " << sec << " and i=" << i << endl;
    //             cout << matrix[sec][i] << " ";
    //             sec--;
    //         }
    //     }
    // }

    //Second Method
    for (int j = 0; j < col; j++)
    {
        if (j % 2 != 0)
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < row; i++)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
    return 0;
}