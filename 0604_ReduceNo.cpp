#include <iostream>
#include <algorithm>
using namespace std;
const int inf = (int)1e9;
int memo[1000000];
int ReduceNo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int q1 = inf, q2 = inf, q3 = inf;
    if (memo[n] != -1)
    {
        return memo[n];
    }
    if (n % 3 == 0)
    {
        q1 = 1 + ReduceNo(n / 3);
    }
    if (n % 2 == 0)
    {
        q2 = 1 + ReduceNo(n / 2);
    }
    q3 = 1 + ReduceNo(n - 1);
    memo[n] = min(q1, min(q2, q3));
    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    fill(memo, memo + n + 1, -1);
    int ans = ReduceNo(n);
    cout << ans;
    return 0;
}