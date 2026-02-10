#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    int cnt = 0;

    for (char c : s)
    {
        if (c == '4' || c == '7')
        {
            if (++cnt > 7)
                break;
        }
    }

    cout << ((cnt == 4 || cnt == 7) ? "YES" : "NO");
    return 0;
}