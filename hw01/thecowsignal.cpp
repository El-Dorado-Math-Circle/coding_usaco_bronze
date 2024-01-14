#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<char>> original;
    for (int i = 0; i < m; ++i) {
        vector<char> row;
        for (int j = 0; j < n; ++j) {
            char c;
            cin >> c;
            row.emplace_back(c);
        }
        original.emplace_back(row);
    }

    vector<vector<char>> scaled;
    for (auto const &row: original) {
        vector<char> scaledRow;
        for (auto const &c: row) {
            for (int i = 0; i < k; ++i) {
                scaledRow.emplace_back(c);
            }
        }
        for (int i = 0; i < k; ++i) {
            scaled.push_back(scaledRow);
        }
    }

    for (auto const &row: scaled) {
        for (auto const &c: row) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
