// https://codeforces.com/contest/431/problem/A

#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    int total = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - '1';
        total += arr[index];
    }

    cout << total;
}
