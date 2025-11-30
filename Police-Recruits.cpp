// https://codeforces.com/contest/427/problem/A
#include <iostream>
using namespace std;

int main()
{
    int freeOfficers = 0;
    int unTreated = 0;
    int numOfEvents;
    cin >> numOfEvents;
    for (int i = 0; i < numOfEvents; i++)
    {
        int event;
        cin >> event;
        if (event == -1 && freeOfficers > 0)
        {
            freeOfficers--;
        }
        else if (event == -1 && freeOfficers == 0)
        {
            unTreated++;
        }
        else
        {
            freeOfficers += event;
        }
    }
    cout << unTreated << endl;
}
