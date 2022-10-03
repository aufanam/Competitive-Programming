#include <bits/stdc++.h>

using namespace std;

int main()
{
        long long n, m;
        cin >> n >> m;
        vector<int> v(n+5);
        int mx = -1;
        for (int i = 0; i < n; i++) {
                cin >> v[i];
                mx = max(mx, v[i]);
        }
        int l = mx;
        int r = mx + m;
        int mn = r;
        while (l <= r) {
                int md = (l + r)/2;
                int res = 0;
                for (int i = 0; i < n; i++) {
                        res += (md - v[i]);
                }
                if (res >= m) {
                        mn = min(mn, md);
                        r = md - 1;
                } else {
                        l = md + 1;
                }
        }
        cout << mn << ' ' << mx + m << '\n';
        return 0;
}