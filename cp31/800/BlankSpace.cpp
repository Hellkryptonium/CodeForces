#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        int maxCount = 0;
        int count = 0;
        for(int i=0; i<n; i++) {
            if(a[i] == 0) {
                count++;
            } else {
                count = 0;
            }
            maxCount = max(maxCount, count);
        }
        cout << maxCount << endl;
    }
    return 0;
}