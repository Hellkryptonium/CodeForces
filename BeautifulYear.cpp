#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = n + 1; i <= INT_MAX; i++)
    {
        string s = to_string(i);
        if (s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[1] != s[3] && s[0] != s[3] && s[0] != s[2])
        {
            cout << i;
            return 0;
        }
    }
}