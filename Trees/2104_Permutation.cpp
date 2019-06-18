#include <iostream>
using namespace std;

void Permutation(char a[100], int i)
{

    if (a[i] == '\0')
    {
        cout << a << endl;
        return;
    }
    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i], a[j]);
        Permutation(a, i + 1);
        //Backtack from Here
        swap(a[i], a[j]);
    }
}

int main()
{

    char a[100];
    cin >> a;

    Permutation(a, 0);
    return 0;
}