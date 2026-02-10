#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool seen[26] = {false};
    char c;
    while (cin >> c && c != '}')
    {
        if (c >= 'a' && c <= 'z')
        {
            seen[c - 'a'] = true;
        }
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (seen[i])
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}