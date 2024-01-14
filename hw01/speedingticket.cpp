#include <bits/stdc++.h>

using namespace std;

struct road {
    int length;
    int speed;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<road> speedLimits;
    vector<road> bessie;
    for (int i = 0; i < n; ++i) {
        road speedLimit{};
        cin >> speedLimit.length;
        cin >> speedLimit.speed;
        speedLimits.emplace_back(speedLimit);
    }
    for (int i = 0; i < m; ++i) {
        road b{};
        cin >> b.length;
        cin >> b.speed;
        bessie.emplace_back(b);
    }

    int speedIdx = 0;
    int bessieIdx = 0;
    int speedLen = speedLimits[speedIdx].length;
    int bessieLen = bessie[bessieIdx].length;
    int maxOver = 0;
    while (speedIdx < n && bessieIdx < m) {
        maxOver = max(maxOver, bessie[bessieIdx].speed - speedLimits[speedIdx].speed);
        if (speedLen == bessieLen) {
            ++speedIdx;
            ++bessieIdx;
            speedLen += speedLimits[speedIdx].length;
            bessieLen += bessie[bessieIdx].length;
        } else if (speedLen > bessieLen) {
            ++bessieIdx;
            bessieLen += bessie[bessieIdx].length;
        } else {
            ++speedIdx;
            speedLen += speedLimits[speedIdx].length;
        }
    }
    while (speedIdx < n) {
        maxOver = max(maxOver, bessie[bessieIdx].speed - speedLimits[speedIdx].speed);
        ++speedIdx;
        speedLen += speedLimits[speedIdx].length;
    }
    while (bessieIdx < m) {
        maxOver = max(maxOver, bessie[bessieIdx].speed - speedLimits[speedIdx].speed);
        ++bessieIdx;
        bessieLen += bessie[bessieIdx].length;
    }

    cout << maxOver;

    return 0;
}
