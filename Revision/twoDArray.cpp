#include <iostream>
using namespace std;
int main()
{

    // char name[][3] = {
    //     {'a', 'b', 'c'},
    //     {'d', 'e', 'f'}};
    // cout << name[0][0];
    char people[10][100] = {
        "Jonty Road",
        "Queen Elizabeth",
        "Johny Sins",
        "Tokyo Drift"};
    string name[10] = {"king"};
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> name[i];
    // }
    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << name[i];
    }

    return 0;
}