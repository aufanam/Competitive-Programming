#include <bits/stdc++.h>

using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n, p, q;
        cin >> n >> p >> q;
        vector<long long> ans(n+5, -1);
        vector<long long> awal(n+5);
        vector<pair<long long, long long>> v(n+5);
        for (long long i = 1; i <= n; i++) {
                long long x;
                cin >> x;
                awal[i] = x;
                v[i] = {x, i};
        }
        sort(v.begin() + 1, v.begin() + n + 1);
        while (q--) {
                long long x;
                cin >> x;
                long long z = awal[x];
                set<long long> buset;
                for (long long i = 1; i <= n; i++) {
                        buset.insert(v[i].first);
                }
                long long zx = *buset.lower_bound(z - p);
                long long l, r;
                for (long long i = 1; i <= n; i++) {
                        if (v[i].first == zx) {
                                l = i;
                                break;
                        }
                }
                for (long long i = 1; i <= n; i++) {
                        if (v[i].first == z) {
                                r = i;
                        }
                }
                long long idx = r;
                long long ans = r - l + 1;
                while (l <= idx) {
                        if (r == n + 1) {
                                break;
                        }
                        if (v[r].first - v[l].first <= p) {
                                ans = max(ans, r - l + 1);
                                r++;
                        } else {
                                l++;
                        }
                }
                cout << ans << '\n';
        }
        return 0;
}