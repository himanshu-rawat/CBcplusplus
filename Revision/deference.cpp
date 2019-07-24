#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;

    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << *(&ptr) << endl;
    cout << "pptr=" << pptr << endl;
    cout << *pptr << endl;
    **pptr = **pptr + 1;
    cout << **pptr << endl;
    return 0;
}