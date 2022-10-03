#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
const int INF = 1e18;
using namespace std;
vector<int> par(555555);
int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
}
void join(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        par[rx] = ry;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n+5);
                for (int i = 1; i <= n; i++) {
                        par[i] = -1;
                }
                queue<pair<pair<int, int>, pair<int, int>>> q;
                vector<pair<int, int>> rng(n+5, {-1, -1});
                for (int i = 1; i <= n; i++) {
                        cin >> v[i];
                        if (v[i] > 0) {
                                q.push({{v[i], i}, {i, i}});
                                par[i] = i;
                                rng[i] = {i, i};
                        }
                }
                int ans = 0;
                int cnt = 10;
                for(;cnt--;q.pop()) {
                        auto z = q.front();
                        cout << z.fi.fi << ' ' << z.fi.se << ' ' << z.se.fi << ' ' << z.se.se << '\n';
                        if (root(z.fi.se) != z.fi.se) continue;
                        int aw = -INF;
                        int ak = -INF;
                        if (z.se.fi > 1) {
                                if (par[z.se.fi - 1] == -1) {
                                        aw = z.fi.fi + v[z.se.fi - 1];
                                } else {
                                        par[root(z.se.fi - 1)] = z.fi.se;
                                        v[z.fi.se] += v[root(z.se.fi - 1)];
                                        q.push({{v[z.fi.se], z.fi.se}, {rng[root(z.se.fi - 1)].fi, z.se.se}});
                                        continue;
                                }
                        }
                        if (z.se.se < n) {
                                if (par[z.se.se + 1] == -1) {
                                        ak = z.fi.fi + v[z.se.se + 1];
                                } else {
                                        cout << "A\n";
                                        par[root(z.se.se + 1)] = z.fi.se;
                                        v[z.fi.se] += v[root(z.se.se + 1)];
                                        q.push({{v[z.fi.se], z.fi.se}, {z.se.fi, rng[root(z.se.se + 1)].se}});
                                        continue;
                                }
                        }
                        if (aw > ak && aw > 0) {
                                rng[z.fi.se].fi--;
                                v[z.fi.se] = aw;
                                q.push({{aw, z.fi.se}, {z.se.fi - 1, z.se.se}});
                        } else if (ak >= aw && ak > 0) {
                                rng[z.fi.se].se++;
                                v[z.fi.se] = ak;
                                q.push({{ak, z.fi.se}, {z.se.fi, z.se.se + 1}});
                        } else {
                                ans += (z.se.se - z.se.fi + 1);
                        }
                }
                ans -= (n - ans);
                cout << ans << '\n';
        }
        return 0;
}