#include <iostream>
using namespace std;
int main()
{
    char dir;
    int x = 0, y = 0;
    while (dir != '.')
    {
        cin >> dir;
        if (dir == 'E')
        {
            x = x + 1;
        }
        if (dir == 'W')
        {
            x = x - 1;
        }
        if (dir == 'N')
        {
            y = y + 1;
        }
        if (dir == 'S')
        {
            y = y - 1;
        }
    }
    if (x >= 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << 'E';
        }
    }
    if (y >= 0)
    {
        for (int i = 0; i < y; i++)
        {
            cout << 'N';
        }
    }
    if (y < 0)
    {
        y = y * (-1);
        for (int i = 0; i < y; i++)
        {
            cout << 'S';
        }
    }
    if (x < 0)
    {
        x = x * (-1);
        for (int i = 0; i < x; i++)
        {
            cout << 'W';
        }
    }
    cout << "X = " << x << " Y=" << y << endl;
    return 0;
}