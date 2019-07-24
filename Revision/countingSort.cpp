#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int freq[100] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << freq[i] << " ";
    }
    cout << endl;
    int storage[100] = {0};
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        int val = freq[i];
        // cout << "Val= " << val << endl;
        for (int j = 0; j < val; j++)
        {
            storage[counter] = i;
            counter++;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << storage[i] << " ";
    }

    return 0;
}
