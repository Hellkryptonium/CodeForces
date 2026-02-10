#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest, host, pile;
    cin >> guest >> host >> pile;

    if (guest.size() + host.size() != pile.size())
    {
        cout << "NO";
        return 0;
    }

    int cnt[26] = {0};

    for (char c : guest)
        cnt[c - 'A']++;
    for (char c : host)
        cnt[c - 'A']++;
    for (char c : pile)
        cnt[c - 'A']--;

    for (int x : cnt)
    {
        if (x != 0)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
