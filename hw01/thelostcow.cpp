#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    int dist = 0;
    int factor = 1;
    int prevPos = x;
    int newPos = x + factor;
    while ((x <= y && newPos < y) || (x > y && newPos > y)) {
        dist += abs(newPos - prevPos);
        factor *= -2;
        prevPos = newPos;
        newPos = x + factor;
    }
    dist += abs(y - prevPos);

    cout << dist;

    return 0;
}
