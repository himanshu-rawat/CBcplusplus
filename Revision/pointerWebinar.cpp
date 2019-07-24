#include <iostream>
using namespace std;
int *print()
{
    int x = 1111;
    return &x;
    // cout << "IN PRINT()" << endl;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << sizeof(a);
}
int main()
{
    int *ptr = print();
    cout << *ptr;
    // int arr[] = {1, 2, 3, 4};
    // cout << arr << endl;
    // cout << &arr << endl;
    // cout << sizeof(arr) << endl;
    // print(arr);
    // int i = 10;
    // float f = 111.11;
    // char c = 'B';
    // double d = 12121222;
    // int *iptr = &i;
    // float *fptr = &f;
    // char *cptr = &c;
    // double *dptr = &d;
    // cout << sizeof(iptr) << endl;
    // cout << sizeof(fptr) << endl;
    // cout << sizeof(cptr) << endl;
    // cout << sizeof(dptr) << endl;

    // cout << "Here" << endl;
    // int *randomPTR = 0;
    // cout << *randomPTR;
    // int arr[] = {10, 20, 30, 40};

    // cout << arr << endl;
    // cout << (&arr) << endl;
    // cout << *(&arr[0]) << endl;

    // cout << arr[0] + 1;

    return 0;
}