#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Compare(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    string fruits[] = {"Apple", "uuaua", "pineapple", "mango"};

    for (int i = 0; i < 4; i++)
    {
        cout << fruits[i] << " ";
    }
    sort(fruits, fruits + 4, Compare);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << fruits[i] << " ";
    }
    return 0;
}