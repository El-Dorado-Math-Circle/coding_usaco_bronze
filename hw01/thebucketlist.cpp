#include <bits/stdc++.h>

using namespace std;

struct cow {
    int start;
    int end;
    int buckets;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int n;
    cin >> n;
    vector<cow> cows;
    for (int i = 0; i < n; ++i) {
        cow c;
        cin >> c.start >> c.end >> c.buckets;
        cows.emplace_back(c);
    }

    int endingTime = 0;
    for (auto c: cows) {
        endingTime = max(endingTime, c.end);
    }
    vector<int> buckets(endingTime, 0);
    for (auto c: cows) {
        for (int i = c.start; i < c.end; ++i) {
            buckets[i] += c.buckets;
        }
    }

    int maxBuckets = 0;
    for (auto b: buckets) {
        maxBuckets = max(maxBuckets, b);
    }
    cout << maxBuckets;

    return 0;
}
