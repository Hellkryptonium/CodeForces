#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s, r;
    cin >> s >> r;

    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        swap(s[i++], s[j--]);
    }

    cout << ((s == r) ? "YES" : "NO");
    return 0;
}