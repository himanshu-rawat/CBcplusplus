#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[10][100];
    int n;
    cin >> n;
    cin.ignore(); // To ignore the enter after n
    for (int i = 0; i < n; i++)
    {
        cin.getline(ch[i], 100);
    }
    cout << "Enter String To Search " << endl;
    char key[100];
    cin.getline(key, 100);
    // Linear String Search
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(key, ch[i]) == 0)
        {
            cout << "found at index " << i;
            break;
        }
    }
    if (i == n)
    {
        cout << "NOt Found " << endl;
    }
}