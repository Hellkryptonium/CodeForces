#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    bool seen[26] = {false};

    for (char c : s)
    {
        if (!seen[tolower(c) - 'a'])
        {
            seen[tolower(c) - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (seen[i] != true)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}