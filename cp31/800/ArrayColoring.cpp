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
        int count_odd = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 != 0)
                count_odd++;
        }

        if (count_odd % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}