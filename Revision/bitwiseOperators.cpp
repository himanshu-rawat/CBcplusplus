#include <iostream>
using namespace std;
// int main()
// {
//     int n, setBits = 0;
//     cin >> n;
//     while (n)
//     {
//         setBits = setBits + (n & 1);
//         n = n >> 1;
//     }
//     cout << setBits << endl;
//     return 0;
// }
int main()
{
    int mask = 1;

    mask = mask << 7; // will make the 31st bit 1 and rest all will be zero
    cout << "The Value Of The Mask =" << mask << endl;

    char ch;
    cin >> ch;
    cout << (int)ch << endl;
    while (mask > 0)
    {
        if ((mask & ch) == 0)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
        mask = mask >> 1;
    }
    return 0;
}