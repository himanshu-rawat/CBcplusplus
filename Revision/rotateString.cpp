#include <iostream>
using namespace std;
int main()
{
    char ch[100];
    cin >> ch;
    int length = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        length++;
    }
    int length2 = length;
    int n;
    cin >> n;
    int totol = length + n;

    for (int i = totol; i >= n; i--)
    {
        ch[i] = ch[length];
        length--;
    }
    int j = 0;
    for (int i = length2; i < totol; i++)
    {
        ch[j] = ch[i];
        j++;
    }
    ch[length2] = '\0';
    cout << ch;
    return 0;
}