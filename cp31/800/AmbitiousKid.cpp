#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min;
    cin >> min;
    for (int i = 1; i < n; i++)
    {
        int num;
        cin >> num;
        if (abs(num) < abs(min))
        {
            min = num;
        }
    }
    cout << abs(min);
    return 0;
}