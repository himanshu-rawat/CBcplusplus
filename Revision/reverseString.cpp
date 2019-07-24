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
    for (int i = length - 1; i >= 0; i--)
    {
        cout << ch[i] << " ";
    }
    return 0;
}