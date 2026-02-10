#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};
    long long ans = 0;

    for (int d : bills)
    {
        ans += n / d;
        n %= d;
    }

    cout << ans;
}