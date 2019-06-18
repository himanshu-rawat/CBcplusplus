#include <iostream>
using namespace std;
int memo[1000];
int Fiboo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (memo[n] != -1)
    {
        return memo[n];
    }
    int val = Fiboo(n - 1) + Fiboo(n - 2);
    memo[n] = val;
    return val;
}
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        memo[i] = -1;
    }
    int ans = Fiboo(n);
    cout << ans;

    return 0;
}