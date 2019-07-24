#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        int num = i;
        int j;
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                break;
            }
        }
        if (j == num)
        {
            cout << j << " ";
        }
    }
    return 0;
}