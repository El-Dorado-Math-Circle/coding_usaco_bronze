#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> shuffles;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        shuffles.emplace_back(s);
    }
    vector<int> ids;
    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        ids.emplace_back(id);
    }

    vector<int> position;
    for (int i = 0; i < n; ++i) {
        position.emplace_back(i);
    }
    for (int i = 0; i < 3; ++i) {
        vector<int> newPosition = position;
        for (int j = 0; j < n; ++j) {
            newPosition[shuffles[j] - 1] = position[j];
        }
        position = newPosition;
    }

    vector<int> originalIds(n);
    for (int i = 0; i < n; ++i) {
        originalIds[position[i]] = ids[i];
    }
    for (auto id: originalIds) {
        cout << id << endl;
    }

    return 0;
}
