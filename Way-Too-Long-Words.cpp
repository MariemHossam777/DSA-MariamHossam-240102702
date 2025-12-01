// https://codeforces.com/contest/71/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string word;

    for (int i = 0; i < n; i++)
    {
        cin >> word;
        int len = word.length();

        if (len <= 10)
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0] << len - 2 << word[len - 1] << endl;
        }
    }
}
