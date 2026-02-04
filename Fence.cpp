#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int windowSum = 0;
    for (int i = 0; i < k; i++)
    {
        windowSum += h[i];
    }

    int minSum = windowSum;
    int ans = 0;

    for (int i = k; i < n; i++)
    {
        windowSum += h[i];
        windowSum -= h[i - k];

        if (windowSum < minSum)
        {
            minSum = windowSum;
            ans = i - k + 1;
        }
    }

    cout << ans + 1;

    return 0;
}