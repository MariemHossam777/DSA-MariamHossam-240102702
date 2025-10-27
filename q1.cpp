// PROBLEM LINK HERE

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, h;
    int width = 0;

    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > h)
            width += 2;
        else
            width += 1;
    }
    cout << width;
}
