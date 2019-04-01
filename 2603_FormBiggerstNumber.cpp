#include <iostream>
using namespace std;
void print(int *arr, int n, int i = 0)
{
    if (i == n)
    {
        return;
    }
    cout << *(arr + i);
    print(arr, n, i + 1);
}

int digits_add(int n)
{
    int i = 0;
    while (n > 0)
    {
        i++;
        n /= 10;
    }
    return i;
}

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int ans = power(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

bool compp(int a, int b)
{
    int ab = a;
    int ba = b;
    int len_a = digits_add(a);
    int len_b = digits_add(b);
    // cout << len_a << " " << len_b << endl;
    int k = power(10, len_a);
    ba = ba * k;
    ba = ba + a;
    k = power(10, len_b);
    ab = ab * k;
    ab = ab + b;
    // cout << ab << " " << ba << endl;
    if (ab > ba)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void form_biggest_number(int *arr, int n, int i = 0)
{

    for (int i = 0; i < n - 1; i++)
    {
        int j = n - 1;
        while (j > i)
        {
            if (compp(arr[j - 1], arr[j]))
            {
                swap(arr[j - 1], arr[j]);
            }
            j--;
        }
    }
}

int main(void)
{
    int arr[100000];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        form_biggest_number(arr, n);
        print(arr, n);
    }

    return 0;
}
