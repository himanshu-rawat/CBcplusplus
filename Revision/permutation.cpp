#include <iostream>
using namespace std;
int length(char ch[])
{
    int len = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
bool compare(char ch1[], char ch2[])
{
    int a[26] = {0}, b[26] = {0};
    for (int i = 0; i < length(ch1); i++)
    {
        a[ch1[i] - 'a']++;
        b[ch2[i] - 'a']++;
    }
    int i = 0;
    for (i = 0; i < 26; i++)
    {
        if (ch1[i] != ch2[2])
        {
            cout << "Not Permuation";
            return false;
        }
    }
    if (i == 26)
    {
        return true;
    }
}
int main()
{
    char ch1[100], ch2[100];
    cin >> ch1 >> ch2;
    int c1 = length(ch1);
    int c2 = length(ch2);
    if (c1 == c2)
    {
        if (compare(ch1, ch2))
        {
            cout << "Yes Permutation";
        }
    }
    else
    {
        cout << "NOT A PERMUTATION" << endl;
    }
    return 0;
}