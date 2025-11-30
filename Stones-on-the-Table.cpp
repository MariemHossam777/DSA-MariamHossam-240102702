// https://codeforces.com/contest/266/problem/A
#include <iostream>
using namespace std;

int main()
{
    int numOfStones;
    cin >> numOfStones;
    string colors;
    cin >> colors;
    int counter = 0;

    for (int i = 0; i < numOfStones - 1; i++)
    {
        if (colors[i] == colors[i + 1])
        {
            counter++;
        }
    }
    cout << counter << endl;
}