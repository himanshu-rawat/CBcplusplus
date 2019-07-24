#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[] = "Hello, friends Chai Pillo, Friends";
    char *ch;
    ch = strtok(str, " ,");
    while (ch != NULL)
    {
        cout << ch;
        ch = strtok(NULL, " ,");
    }
    return 0;
}