#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int numCows;
    cin >> numCows;

    long long maxProfit = 0;
    int optimalTuition = 0;
    vector<int> tuitions;
    for (int i = 0; i < numCows; ++i) {
        int maxTuition;
        cin >> maxTuition;
        tuitions.emplace_back(maxTuition);
    }

    sort(tuitions.begin(), tuitions.end());

    for (int i = 0; i < numCows; ++i) {
        int currTuition = tuitions[i];
        long long profit = (long long) currTuition * (numCows - i);
        if (maxProfit < profit) {
            maxProfit = profit;
            optimalTuition = currTuition;
        }
    }

    cout << maxProfit << " " << optimalTuition;

    return 0;
}
