#include <iostream>
#include <algorithm>
using namespace std;
bool compare(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1
    }
}
int main()
{
    pair<string, int> employee[100];
    string name;
    int salary;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin >> name >> salary;
        employee[i].first = name;
        employee[i].second = salary;
    }
    sort(employee, employee + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << "Name= " << employee[i].first << " and salary = " << employee[i].second << endl;
    }

    return 0;
}
