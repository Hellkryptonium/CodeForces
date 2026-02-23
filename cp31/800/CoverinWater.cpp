#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int maxSeg = 0;
        int cnt = 0;
        int totalDots = 0;

        for (char c : s)
        {
            if (c == '.')
            {
                cnt++;
                totalDots++;
                maxSeg = max(maxSeg, cnt);
            }
            else
            {
                cnt = 0;
            }
        }

        if (totalDots == 0)
        {
            cout << 0 << '\n';
        }
        else if (maxSeg >= 3)
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << totalDots << '\n';
        }
    }

    return 0;
}
