// https://codeforces.com/contest/265/problem/A
#include <iostream>
using namespace std;

int main()
{
    string stones;
    string instructions;
    cin >> stones >> instructions;

    int position = 0;

    for (int i = 0; i < instructions.length(); i++)
    {
        if (stones[position] == instructions[i])
        {
            position++;
        }
    }

    cout << position + 1;
}
