#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}