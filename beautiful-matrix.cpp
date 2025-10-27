// PROBLEM LINK HERE

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r = -1, c = -1;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    int moves = abs(r - 3) + abs(c - 3);
    cout << moves << "\n";
    return 0;
}
