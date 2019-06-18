#include <iostream>
#include <climits>
using namespace std;
int mintrials(int egg, int floors)
{
    if (floors == 1 || floors == 0)
    {
        return floors;
    }
    if (egg == 1)
    {
        return floors;
    }
    int res = INT_MAX;
    for (int x = 1; x <= floors; x++)
    {
        int ans = max(mintrials(egg - 1, x - 1), mintrials(egg, floors - x));
        if (ans < res)
        {
            res = ans;
        }
    }
    return res + 1;
}
int main()
{

    int floor = 20, egg = 2;
    cout << mintrials(egg, floor);
    return 0;
}
