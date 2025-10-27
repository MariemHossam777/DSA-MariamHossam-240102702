// PROBLEM LINK HERE

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, o;
    int year = o;
    cin >> a >> o;

    while (a < o)
    {

        a *= 3;
        o *= 2;

        year += 1;
    }
    cout << year;
}