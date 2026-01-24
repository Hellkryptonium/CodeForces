#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int count = 0;

    while (n <= m)
    {
        n *= 3;
        m *= 2;
        count++;
    }

    cout << count;

    return 0;
}