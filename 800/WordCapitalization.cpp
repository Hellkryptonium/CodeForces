#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    s[0] = toupper(static_cast<unsigned char>(s[0]));
    cout << s;
    return 0;
}
