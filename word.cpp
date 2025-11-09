// https://codeforces.com/contest/59/problem/A

#include <iostream>
#include <string>
using namespace std;
int main()
{

    string word;
    cin >> word;
    int count_apper = 0, count_lower = 0;
    for (int i = 0; i < word.size(); i++)
    {

        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            // word[i] is capital
            count_apper++;
        }
        else
        {
            // word[i] is small
            count_lower++;
        }
    }

    if (count_apper > count_lower)
    {
        for (int i = 0; i < word.size(); i++)
        {

            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] = word[i] - ('a' - 'A');
            }
        }
    }
    else
    {
        for (int i = 0; i < word.size(); i++)
        {

            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + ('a' - 'A');
            }
        }
    }
    cout << word << endl;
}
