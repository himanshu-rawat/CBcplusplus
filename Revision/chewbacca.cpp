#include <iostream>
using namespace std;
int main()
{
    char ch[100];
    cin >> ch;
    cout << ch << endl;
    for (int i = 0; ch[i] != '\0'; i++)
    {

        int num = ch[i] - '0';
        if (num < (9 - num))
        {
            cout << (num);
        }
        else
        {
            cout << (9 - num);
        }
    }
    return 0;
}