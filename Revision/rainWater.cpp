#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100], left[100], right[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //For Left Part
    int max = 0, l = 0;
    for (int i = 0; i < n; i++)
    {
        l = arr[i];
        if (l > max)
        {
            max = l;
            left[i] = max;
        }
        else
        {
            left[i] = max;
        }
    }
    cout << "LEFT" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left[i] << " ";
    }
    cout << endl
         << "RIGHT" << endl;
    max = 0;
    int r = 0;
    for (int i = (n - 1); i >= 0; i--)
    {
        r = arr[i];
        if (r > max)
        {
            max = r;
            right[i] = max;
        }
        else
        {
            right[i] = max;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << right[i] << " ";
    }
    cout << endl;
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water = water + (min(left[i], right[i]) - arr[i]);
    }
    cout << water;
}