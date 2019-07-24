#include <iostream>
using namespace std;
int SortedSearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        cout << arr[mid] << endl
             << arr[e] << endl;
        if (arr[mid] <= key && key <= arr[e])
        {
            cout << "Here in If\n";
            while (s <= e)
            {
                if (arr[mid] == key)
                {
                    cout << "Found at Index =" << mid << endl;
                    return mid;
                }
                else if (arr[mid] < key)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
                mid = (s + e) / 2;
            }
        }
        else
        {
            e = mid;
            cout << " s & e  " << s << " " << e << endl;
            mid = (s + e) / 2;
            while (s <= e)
            {
                cout << "middleman = " << mid << endl;
                if (arr[mid] == key)
                {
                    cout << "Found at Index =" << mid << endl;
                    return mid;
                }
                else if (arr[mid] < key)
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
                mid = (s + e) / 2;
                cout << " mid ki value =" << mid << endl;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int key;
    cin >> key;
    SortedSearch(arr, n, key);

    return 0;
}
