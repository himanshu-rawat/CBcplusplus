#include <iostream>
using namespace std;
int main()
{
    int arr[100], n, unique = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Unique Number Algo
    for (int i = 0; i < n; i++)
    {
        unique = (arr[i] ^ unique);
        // cout << "unique=" << unique << endl;
    }
    cout << unique << endl;
    return 0;
}