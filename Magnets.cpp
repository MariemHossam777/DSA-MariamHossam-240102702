// https://codeforces.com/contest/344/problem/A?mobile=true

#include <iostream>
using namespace std;
#include <string>

int main()
{

    int numOfmagnets;
    int numOfGroups = 0;
    cin >> numOfmagnets;
    string lastMagnet = "";
    for (int i = 0; i < numOfmagnets; i++)
    {
        string magnet;
        cin >> magnet;

        if (lastMagnet != magnet)
        {
            numOfGroups++;
        }

        lastMagnet = magnet;
    }

    cout << numOfGroups;
}