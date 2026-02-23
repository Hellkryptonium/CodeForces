#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max_gap = arr[0];

        for (int i = 1; i < n; i++)
        {
            max_gap = max(max_gap, arr[i] - arr[i - 1]);
        }

        max_gap = max(max_gap, x - arr[n - 1]);

        int answer = max(max_gap, 2 * (x - arr[n - 1]));
        cout << answer << '\n';
    }
    return 0;
}
