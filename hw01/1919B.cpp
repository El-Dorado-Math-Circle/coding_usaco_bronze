#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int numTestCases;
    cin >> numTestCases;
    for (int i = 0; i < numTestCases; ++i) {
        int stringLen;
        cin >> stringLen;
        int sum = 0;
        for (int j = 0; j < stringLen; ++j) {
            char plusMinus;
            cin >> plusMinus;
            if (plusMinus == '+') {
                ++sum;
            } else {
                --sum;
            }
        }

        cout << abs(sum) << endl;
    }

    return 0;
}
