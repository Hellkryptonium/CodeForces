#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    int arr[n + 1] = {0};

    int p;
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
    }

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int b;
        cin >> b;
        arr[b]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
    return 0;
}