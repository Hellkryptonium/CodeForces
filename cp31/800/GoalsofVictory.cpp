#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            long long a;
            cin >> a;
            sum += a;
        }
        cout << -1 * sum << endl;
    }
    return 0;
}