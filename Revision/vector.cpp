#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    vec.reserve(100);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        vec.push_back(i * i);
    }
    for (int i = 0; i < vec.size(); i++)
    {

        cout << vec[i] << " ";
    }
    cout << endl
         << vec.max_size() << endl;
    return 0;
}