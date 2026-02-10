#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_set<int> s;
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        s.insert(n);
    }

    cout << 4 - s.size();
    return 0;
}