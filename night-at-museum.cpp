// https://codeforces.com/contest/731/problem/A
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string word;
    cin >> word;

    char current = 'a';
    int total = 0;

    for (int i = 0; i < word.length(); i++)
    {
        char next = word[i];

        int forward = abs(next - current);
        int backward = 26 - forward;

        total += min(forward, backward);

        current = next;
    }

    cout << total;
}
