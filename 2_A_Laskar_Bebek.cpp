#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
struct DSU {
        int n;
        vector<int> par, sz;
        DSU(int n) : n(n) {
                sz = vector<int>(n+5, 1);
                par = vector<int>(n+5);
                iota(all(par), 0);
        }
        int root(int x) {
                if (par[x] == x) return x;
                return par[x] = root(par[x]);
        }
        bool check(int x, int y) {
                return (root(x) == root(y));
        }
        void join(int x, int y) {
                int a = root(x), b = root(y);
                if (a == b) return;
                if (sz[a] < sz[b]) {swap(a, b);}
                par[b] = a;
                sz[a] += sz[b];
        }
};
bool cmp(pair<int, pair<int, int>> x, pair<int, pair<int, int>> y) {
        if (x.fi != y.fi) {
                return x.fi < y.fi;
        }
        return x.se.fi < y.se.fi;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string subsoal;
        cin >> subsoal;
        int n, k;
        cin >> n >> k;
        vector<pair<int, pair<int, int>>> v(n);
        for (int i = 0; i < n; i++) {
                cin >> v[i].fi;
                v[i].se.fi = i;
        }
        sort(all(v), cmp);
        for (int i = 0; i < n; i++) {
                v[i].se.se = i;
        }
        vector<pair<int, int>> rng(n);
        for (int i = 0; i < n; i++) {
                rng[i] = {min(v[i].se.fi, v[i].se.se), max(v[i].se.fi, v[i].se.se)};
        }
        DSU D(n);
        sort(all(rng));
        int ans = 0;
        int lst = -1;
        int idx = -1;
        int lf = rng.front().fi;
        int rg = rng.front().se;
        vector<pair<int, int>> ok;
        for (int i = 1; i < n; i++) {
                if (rg >= rng[i].fi) {
                        lf = min(lf, rng[i].fi);
                        rg = max(rg, rng[i].se);
                } else {
                        if (lf != rg) ok.push_back({lf, rg});
                        lf = rng[i].fi;
                        rg = rng[i].se;
                }               
        }
        if (lf != rg) ok.push_back({lf, rg});
        lst = -1;
        vector<int> zx;
        for (auto z : ok) {
                if (lst != -1) zx.push_back(z.fi - lst - 1);
                lst = z.se;
                ans += z.se - z.fi + 1;
        }
        sort(all(zx));
        if (k >= ok.size()) {
                ans += k - ok.size();
        } else {
                ans += accumulate(zx.begin(), zx.begin() + ok.size() - k, 0ll);
        }
        cout << ans << '\n';
        return 0;
}