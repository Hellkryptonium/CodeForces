#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    int matched = 0;

    while (i < n && j < m)
    {
        if (b[j] >= a[i])
        {
            matched++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << (n - matched);
}