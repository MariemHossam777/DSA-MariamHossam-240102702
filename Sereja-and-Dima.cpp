// https://codeforces.com/contest/381/problem/A

#include <iostream>
using namespace std;
int main()
{
    int numOfCards;
    cin >> numOfCards;
    int *valueOfCards = new int[numOfCards];

    for (int i = 0; i < numOfCards; i++)
    {
        cin >> valueOfCards[i];
    }

    int points[] = {0, 0};
    int turn = 0;
    int left = 0;
    int right = numOfCards - 1;
    while (left <= right)
    {
        // points[turn] += 10;

        if (valueOfCards[left] > valueOfCards[right])
        {

            points[turn] += valueOfCards[left];
            left++;
        }
        else
        {
            points[turn] += valueOfCards[right];
            right--;
        }

        turn = (turn + 1) % 2;
    }
    cout << points[0] << " " << points[1] << endl;
}
