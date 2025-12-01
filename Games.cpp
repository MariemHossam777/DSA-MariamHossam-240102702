// https://codeforces.com/contest/268/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int home[30];
    int guest[30];

    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> guest[i];
    }

    int countGames = 0;

    for (int host = 0; host < n; host++)
    {
        for (int away = 0; away < n; away++)
        {
            if (host == away)
                continue;
            if (home[host] == guest[away])
            {
                countGames++;
            }
        }
    }

    cout << countGames;
}
