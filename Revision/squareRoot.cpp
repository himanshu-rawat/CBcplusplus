#include <iostream>
using namespace std;
float SquareRoot(int n, int precision)
{
    int start = 0, end = n;
    float ans = -1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }

        if (mid * mid < n)
        {
            start = mid + 1;
            ans = mid;
            // cout << "In IF CASE start=" << start << " and ans=" << ans << endl;
        }
        else
        {
            end = mid - 1;
            ans = mid - 1;
            // cout << "In ELSE CASE end=" << end << " and ans=" << ans << endl;
        }
    }
    cout << "ans=" << ans << endl;
    float inc = 0.1;
    for (int i = 0; i < precision; i++)
    {
        while (ans * ans <= n)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc / 10;
    }
    cout << "ans=" << ans << endl;
}
int main()
{
    // int sqrt, precision;
    // cin >> sqrt >> precision;
    SquareRoot(101, 3);
    SquareRoot(49, 2);
    return 0;
}

// #include <iostream>
// using namespace std;

// int BinarySearch(int arr[], int n, int key)
// {
//     int start = 0, end = n - 1, mid;
//     float number;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if ((arr[mid] * arr[mid]) == key)
//         {
//             number = arr[mid];
//             break;
//         }
//         else if ((arr[mid] * arr[mid]) < key)
//         {
//             start = mid + 1;
//             number = start;
//         }
//         else
//         {
//             end = mid - 1;
//             number = end;
//         }
//     }
//     cout << "Number = " << number << endl;
//     float decimal = 0.1;

//     for (int i = 0; i < 3; i++)
//     {
//         while (number * number <= key)
//         {
//             number = number + decimal;
//             // decimal = decimal + 0.1;
//         }
//         number = number - decimal;
//         decimal = decimal / 10;
//     }
//     cout << "Number = " << number << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[100], val = 0;
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = val;
//         val++;
//     }
//     cout << endl;
//     int sqrt;
//     cin >> sqrt;
//     float number = BinarySearch(arr, n, sqrt);

//     return 0;
// }
