#include <bits/stdc++.h>

using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                mn = min(mn, x);
                mx = max(mx, x);
        }
        int z = (mx - mn + 1)/2;
        cout << z << '\n';
        return 0;
}