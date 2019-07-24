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

    int number;
    cin >> number;
    int i = 0;
    col--;
    while (i < row && col >= 0)
    {
        if (matrix[i][col] == number)
        {

            cout << "Found At " << i << " and " << col << endl;
            break;
        }
        else if (matrix[i][col] < number)
        {
            i++;
        }
        else
        {
            col--;
        }
    }
    if (i >= row || col < 0)
    {
        cout << "Element Not FOund!!!!";
    }
    return 0;
}