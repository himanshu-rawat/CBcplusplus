#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << " &a=" << &a << endl;
    ptr = ptr + 1;
    cout << " ptr=" << ptr << " *ptr=" << *ptr << endl;
    return 0;
}