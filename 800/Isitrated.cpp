#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> unsorted;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
        {
            cout << "rated";
            return 0;
        }
        unsorted.push_back(a);
    }

    vector<int> sorted = unsorted;
    sort(sorted.begin(), sorted.end(), greater<int>());
    cout << ((sorted == unsorted) ? "maybe" : "unrated");
    return 0;
}