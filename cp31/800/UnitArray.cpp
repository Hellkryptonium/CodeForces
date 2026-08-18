#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int positive = 0;
        int negative = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;

            if (num == 1)
                positive++;
            else
                negative++;
        }

        int operations = 0;

        while (negative > positive || negative % 2 != 0) {
            negative--;
            positive++;
            operations++;
        }

        cout << operations << endl;
    }

    return 0;
}