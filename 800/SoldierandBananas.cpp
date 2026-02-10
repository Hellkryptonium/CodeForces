#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long k, n, w;
    cin >> k >> n >> w;

    long long cost = k * w * (w + 1) / 2;
    long long borrow = cost - n;

    cout << (borrow > 0 ? borrow : 0);
    return 0;
}