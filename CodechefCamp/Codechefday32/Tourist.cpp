#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, A, B;
        cin >> n >> A >> B;

        int ans = INT_MAX;

        for(int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            int dist = abs(A - x) + abs(B - y);
            ans = min(ans, dist);
        }

        cout << ans << endl;
    }

    return 0;
}