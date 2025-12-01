// https://codeforces.com/contest/228/problem/A
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int color[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> color[i];
    }

    sort(color, color + 4);

    int differentColors = 1;
    for (int i = 1; i < 4; i++)
    {
        if (color[i] != color[i - 1])
        {
            differentColors++;
        }
    }

    int needToBuy = 4 - differentColors;
    cout << needToBuy;
}
