#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int capacity = 0;
    int maxCapacity = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        capacity = capacity + b - a;
        maxCapacity = max(maxCapacity, capacity);
    }
    cout << maxCapacity;
    return 0;
}