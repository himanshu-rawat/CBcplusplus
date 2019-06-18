#include <iostream>
using namespace std;
int main()
{
    // cout << (4 & 5) << " " << (4 | 5) << " " << (7 ^ 7);
    // cout << (5 << 3) << endl;
    // cout << (256 >> 5);

    // Count The Set BITS in a given Number;
    int n;
    cin >> n;
    int count = 0;
    while (n)
    {
        cout << n << endl;
        n = n >> 1;
        count++;
    }
    cout << count << endl;
    return 0;
}