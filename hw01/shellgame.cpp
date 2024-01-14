#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);


    int numSwaps;
    cin >> numSwaps;
    vector<pair<int, int>> swaps;
    vector<int> guesses;

    for (int i = 0; i < numSwaps; ++i) {
        pair<int, int> swap;
        int guess;
        cin >> swap.first >> swap.second >> guess;
        swaps.emplace_back(swap);
        guesses.emplace_back(guess);
    }

    int shells[] = {1, 2, 3};
    int maxPoints = 0;
    for (int i = 1; i <= 3; ++i) {
        shells[0] = 1;
        shells[1] = 2;
        shells[2] = 3;
        int curr = 0;
        for (int j = 0; j < numSwaps; ++j) {
            pair<int, int> s = swaps[j];
            int temp = shells[s.first - 1];
            shells[s.first - 1] = shells[s.second - 1];
            shells[s.second - 1] = temp;
            if (shells[guesses[j] - 1] == i) ++curr;
        }
        maxPoints = max(maxPoints, curr);
    }

    cout << maxPoints << endl;

    return 0;
}
