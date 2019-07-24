#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    for (int i = 1; i <= n; i++)
    {
        p = (i & 1 ? 1 : 0);
        for (int j = 0; j < i; j++)
        {
            cout << p << " ";
            p = !p;
        }
        cout << endl;
    }
    return 0;
}