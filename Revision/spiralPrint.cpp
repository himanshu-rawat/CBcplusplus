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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int startRow = 0, startCol = 0;
    int endColumn = col - 1, endRow = row - 1;

    while (startRow <= endRow && startCol <= endColumn)
    { //StartRow To EndColumn
        for (int i = startRow; i <= endColumn; i++)
        {
            cout << matrix[startRow][i] << " ";
        }
        cout << endl;
        startRow++;

        for (int i = startRow; i <= endRow; i++)
        {
            cout << matrix[i][endRow] << " ";
        }
        cout << endl;
        endColumn--;

        if (startRow <= endRow)
        {
            for (int i = endColumn; i >= startCol; i--)
            {
                cout << matrix[endRow][i] << " ";
            }
            cout << endl;
            endRow--;
        }

        if (startCol <= endColumn)
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << matrix[i][startCol] << " ";
            }
            cout << endl;
            startCol++;
        }
    }
    return 0;
}