//Minimum Cut Roads
#include <iostream>
#include <climits>
using namespace std;

int minCutRods(int *values, int length)
{
    if (length <= 0)
    {
        return 0;
    }
    int res = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        res = max(res, values[i] + minCutRods(values, length - i - 1));
    }
    return res;
}

int main()
{
    int values[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(values) / sizeof(int);
    cout << minCutRods(values, n);
}