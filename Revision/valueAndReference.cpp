#include <iostream>
using namespace std;
void value(int n)
{
    n = n + 10;
    cout << "Inside VAlUE= " << n << endl;
}
void reference(int *n)
{
    *n = *n + 10;
}
void address(int &alias)
{
    alias = alias + 10;
}
int main()
{
    int x;
    cin >> x;
    cout << x << endl;
    int &alias = x;
    alias = alias * 10;
    cout << x;
    // value(x);
    // cout << "By Value() = " << x << endl;
    // reference(&x);
    // cout << "By Reference= " << x << endl;

    // address(x);
    // cout << "After " << x;
    return 0;
}