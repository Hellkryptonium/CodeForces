#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int freq[101] = {0};
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
        total += x;
    }

    int mySum = 0, cnt = 0;
    for (int v = 100; v >= 1; v--)
    {
        while (freq[v] > 0)
        {
            freq[v]--;
            mySum += v;
            cnt++;
            if (mySum > total - mySum)
            {
                cout << cnt;
                return 0;
            }
        }
    }
}