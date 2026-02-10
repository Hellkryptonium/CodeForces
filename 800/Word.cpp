#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int low = 0, high = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if ((int)c <= 90)
        {
            high++;
        }
        else
        {
            low++;
        }
    }
    if (low >= high)
    {
        for (int i = 0; i < s.size(); i++)
        {
            char ch = tolower(s[i]);
            s[i] = ch;
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            char ch = toupper(s[i]);
            s[i] = ch;
        }
    }

    cout << s;

    return 0;
}