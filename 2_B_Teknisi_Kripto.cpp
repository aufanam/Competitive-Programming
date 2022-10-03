#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int INFF = 1e18;
vector<int> par(555555);
int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
}
void join(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx < ry) swap(rx, ry);
        par[rx] = ry;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, m;
        cin >> n >> m;
        iota(all(par), 0);
        vector<pair<pair<int, int>, int>> zz;
        for (int i = 0; i < m; i++) {
                int a, b, c, d;
                cin >> a >> b >> c >> d;
                if (c == 0) {
                        join(a, b);
                } else {
                        zz.push_back({{a, b}, d});
                        zz.push_back({{b, a}, d});
                }
        }
        vector<pair<int, int>> val(n+5, {0, 0});
        map<pair<int, int>, int> mapan;
        for (auto z : zz) {
                if (root(z.fi.fi) == root(z.fi.se)) {
                        continue;
                }
                // if (root(z.fi.fi) > root(z.fi.se)) swap(z.fi.fi, z.fi.se);
                if (!mapan.count({root(z.fi.fi), root(z.fi.se)})) {
                        mapan.insert({{root(z.fi.fi), root(z.fi.se)}, z.se});
                } else {
                        mapan[{root(z.fi.fi), root(z.fi.se)}] = min(mapan[{root(z.fi.fi), root(z.fi.se)}], z.se);
                }
        }
        set<int> buset;
        for (int i = 1; i <= n; i++) {
                buset.insert(root(i));
        }
        for (auto z : mapan) {
                val[z.fi.fi].fi = max(val[z.fi.fi].fi, z.se);
                val[z.fi.fi].se++;
                // val[z.fi.se].fi = max(val[z.fi.se].fi, z.se);
                // val[z.fi.se].se++;
        }
        vector<int> v;
        // for (int i = 1; i <= n; i++) {
        //         cout << val[i].se << ' ';
        // }
        // cout << '\n';
        for (int i = 1; i <= n; i++) {
                v.push_back((val[root(i)].se == buset.size() - 1 ? val[root(i)].fi : INFF));
        }
        sort(all(v));
        for (int i = 0; i < n; i++) {
                cout << (v[i] == INFF ? -1 : v[i]) << " \n"[i == n - 1];
        }
        return 0;
}