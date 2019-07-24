#include <iostream>
using namespace std;
int main()
{
    int matrix[10][10];
    int row, col, put = 1;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = put;
            put++;
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int startRow = 0, startCol = 0;
    int endRow = row - 1, endCol = col - 1;
    while (startRow <= endRow && startCol <= endCol)
    {
        // Start Col To End Start Col
        for (int i = startCol; i <= endCol; i++)
        {
            // cout << " i =" << i << endl;
            cout << matrix[startRow][i] << " ";
        }
        startRow++;
        for (int i = startRow; i <= endRow; i++)
        {
            cout << matrix[i][endCol] << " ";
        }
        endCol--;
        // cout << "\n endcol=" << endCol << " and endRow =" << endRow << endl;
        if (startRow < endRow)
        {
            for (int i = endCol; i >= startCol; i--)
            {
                cout << matrix[endRow][i] << " ";
            }
            endRow--;
        }

        if (startCol < endCol)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << matrix[i][startCol] << " ";
            }
            startCol++;
        }
    }
    return 0;
}
