#include <iostream>
using namespace std;
int main()
{
    int matrix[10][10];
    int row, col, val = 1;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = val;
            val++;
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
    int colSum = 0, y;
    int rowSum = 0, x;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + matrix[i][j];
        }
        if (sum > rowSum)
        {
            rowSum = sum;
            x = i;
        }
    }
    cout << "Row with Largest Sum =" << rowSum << " and it is = " << x + 1 << endl;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum = sum + matrix[i][j];
        }
        if (sum > colSum)
        {
            colSum = sum;
            y = j;
        }
    }
    cout << "Column with Largest Sum =" << colSum << " and it is = " << y + 1 << endl;
    return 0;
}
