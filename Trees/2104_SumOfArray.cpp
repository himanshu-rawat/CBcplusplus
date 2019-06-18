#include <iostream>
#include <vector>
using namespace std;
void SumArray(int arr[], int sum, int n, vector<int> v, int i)
{
    if (i == n)
    {
        int sum1 = 0;
        for (int j = 0; j < v.size(); j++)
        {
            sum1 += v[j];
        }
        if (sum == sum1)
        {
            for (int j = 0; j < v.size(); j++)
            {
                cout << v[j] << "  ";
            }
            cout << endl;
        }
        return;
    }

    v.push_back(arr[i]);
    SumArray(arr, sum, n, v, i + 1);
    v.pop_back();
    SumArray(arr, sum, n, v, i);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = 10;
    vector<int> v;
    SumArray(arr, sum, n, v, 0);
    return 0;
}