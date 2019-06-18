#include <iostream>
using namespace std;
void SubSequences(char in[100], char out[100], int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    out[j] = in[i];
    SubSequences(in, out, i + 1, j + 1);
    SubSequences(in, out, i + 1, j);
}
int main()
{
    char a[100], b[100];
    cin >> a;
    SubSequences(a, b, 0, 0);
}