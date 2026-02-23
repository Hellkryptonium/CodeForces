#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int m;
    cin >> t >> m;

    vector<int> juices(m + 1, 1);

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool served = false;

        for (int i = 0; i < n; i++)
        {
            if (juices[arr[i]] == 1)
            {
                juices[arr[i]] = 0;
                cout << arr[i] << endl;
                served = true;
                break;
            }
        }

        if (!served)
            cout << 0 << endl;
    }
    return 0;
}