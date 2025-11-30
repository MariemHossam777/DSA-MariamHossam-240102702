

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string first;
    cout << "Enter the first text: ";
    cin >> first;

    string second;
    cout << "Enter the second text: ";
    cin >> second;

    reverse(first.begin(), second.end());
    if (first == second)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}
