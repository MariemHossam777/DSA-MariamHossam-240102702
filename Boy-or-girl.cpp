// https://codeforces.com/problemset/problem/236/A

#include <iostream>
using namespace std;

int main()
{
    string name;
    cin >> name;

    int seen[26] = {0};
    int distinct = 0;

    for (char c : name)
    {
        int idx = c - 'a';
        if (seen[idx] == 0)
        {
            distinct++;
            seen[idx] = 1;
        }
    }

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
