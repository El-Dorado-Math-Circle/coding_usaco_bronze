#include <bits/stdc++.h>

using namespace std;

const int MATRIX_SIZE = 5;
const int CENTER = 2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int numMoves = 0;

    for (int j = 0; j < MATRIX_SIZE; ++j) {
        for (int k = 0; k < MATRIX_SIZE; ++k) {
            int cell;
            cin >> cell;

            if (cell) {
                numMoves += abs(k - CENTER) + abs(j - CENTER);
            }
        }
    }

    cout << numMoves << endl;

    return 0;
}
