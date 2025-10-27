// PROBLEM LINK HERE

#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    int numofProblems;
    cin >> numofProblems;
    for (int i = 0; i < numofProblems; i++)
    {
        int a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        if (a + b + c >= 2)
        {
            total++;
        }
    }
    cout << total << endl;
}