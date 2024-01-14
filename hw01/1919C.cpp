#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int numTestCases;
    cin >> numTestCases;
    for (int i = 0; i < numTestCases; ++i) {
        int arrayLen;
        cin >> arrayLen;

        int penalty = 0;
        int prevSmall = INT_MAX;
        int prevLarge = INT_MAX;

        for (int j = 0; j < arrayLen; ++j) {
            int num;
            cin >> num;

            if (prevSmall > prevLarge) {
                int temp = prevSmall;
                prevSmall = prevLarge;
                prevLarge = temp;
            }

            if (num <= prevSmall) {
                prevSmall = num;
            } else if (num <= prevLarge) {
                prevLarge = num;
            } else {
                prevSmall = num;
                ++penalty;
            }

        }

        cout << penalty << endl;
    }

    return 0;
}
