#include <iostream>
using namespace std;
void display(int arr[], int n)
{
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void countSort(int arr[], int n)
{
    int output[n]; // = new int[n];
    int max = findMax(arr, n);
    int k = max + 1;
    int freq[k] = {0};
    display(freq, k);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    display(freq, k);
    // cummalative sum
    for (int i = 1; i < k; i++)
    {
        freq[i] = freq[i - 1] + freq[i];
    }
    display(freq, k);
    cout << "Final Step...";
    for (int i = n - 1; i >= 0; i--)
    {
        output[ freq[ arr[i] ] ] = arr[i];
        freq[arr[i]] -= 1;
    }
    display(output, n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    // display(arr, n);
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n);
    countSort(arr, n);
    return 0;
}