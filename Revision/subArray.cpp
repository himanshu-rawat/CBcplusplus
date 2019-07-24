#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         for (int k = j; k <= i; k++)
    //         {
    //             cout << arr[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
}