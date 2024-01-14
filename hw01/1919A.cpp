#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int numTestCases;
    cin >> numTestCases;
    for (int i = 0; i < numTestCases; ++i) {
        int aliceCoin, bobCoin;
        cin >> aliceCoin >> bobCoin;

        if ((aliceCoin + bobCoin) % 2 == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }

    return 0;
}
