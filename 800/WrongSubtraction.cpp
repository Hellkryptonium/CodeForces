#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int k;
    cin >> n >> k;

    while (k > 0)
    {
        int d = n % 10;
        if (d == 0)
        {
            n /= 10;
            --k;
        }
        else
        {
            int t = min(k, d);
            n -= t;
            k -= t;
        }
    }

    cout << n;
    return 0;
}