#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int count = 0;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int k = scores[m - 1];

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= k && scores[i] > 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}