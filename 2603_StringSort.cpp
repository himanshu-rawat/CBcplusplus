#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;

int length(char *a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}

void swap(char *a, char *b)
{
    int len_a = length(a);
    int len_b = length(b);
    int max = len_a;
    if (len_b > max)
    {
        max = len_b;
    }
    for (int i = 0; i < max; i++)
    {
        char ch = a[i];
        a[i] = b[i];
        b[i] = ch;
    }
}

int check_break(char *a, char *b, int len_a, int len_b)
{
    if (a[len_a] == '\0' or b[len_b] == '\0')
    {
        return -1;
    }
    if ((int)a[len_a] != (int)b[len_b])
    {
        return len_a;
    }
    return check_break(a, b, len_a + 1, len_b + 1);
}

void swap_ac(char *a, char *b)
{
    int checking = check_break(a, b, 0, 0);
    if (checking == -1)
    {
        int len_a = length(a);
        int len_b = length(b);
        if (len_a < len_b)
        {
            swap(a, b);
        }
    }
    else
    {
        if ((int)a[checking] > (int)b[checking])
        {
            swap(a, b);
        }
    }
}

void sort_string(char a[100][100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j = n - 1;
        while (j >= i)
        {
            if ((int)a[j - 1][0] > (int)a[j][0])
            {
                swap(a[j - 1], a[j]);
            }
            else if ((int)a[j - 1][0] == (int)a[j][0])
            {
                swap_ac(a[j - 1], a[j]);
            }
            j--;
        }
    }
}
int main(void)
{
    char a[100][100];
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a[i], 100, '\n');
    }
    sort_string(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}
