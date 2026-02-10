#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    double ans = 1e18;

    while (n--)
    {
        double x, y, v;
        cin >> x >> y >> v;

        double time = hypot(x - a, y - b) / v;
        ans = min(ans, time);
    }

    cout << fixed << setprecision(10) << ans;
}
