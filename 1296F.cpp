#include <bits/stdc++.h>
#define fi                                                              first
#define se                                                              second
#define ckmin(a, b)                                                     a = min(a, b)
#define all(x)                                                          (x).begin(), (x).end()
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
using namespace std;
vector<vector<pair<int, int>>> v(5005);
void dfs(int x, int p, int zz, vector<pair<int, int>> &par) {
        par[x] = {p, zz};
        for (auto z : v[x]) {
                if (z.fi != p) {
                        dfs(z.fi, x, z.se, par);
                }
        }
}
void solve() {
        int n;
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
                int a, b;
                cin >> a >> b;
                v[a].push_back({b, i});
                v[b].push_back({a, i});
        }
        vector<vector<pair<int, int>>> par(n+5, vector<pair<int, int>>(n+5));
        for (int i = 1; i <= n; i++) {
                dfs(i, -1, -1, par[i]);
        }
        vector<int> ans(n, 1000000);
        int m;
        cin >> m;
        vector<pair<int, pair<int, int>>> q(m);
        for (int i = 0; i < m; i++) {
                cin >> q[i].se.fi >> q[i].se.se >> q[i].fi;
        }
        sort(all(q));
        for (int i = 0; i < m; i++) {
                int a = q[i].se.fi;
                int b = q[i].se.se;
                while (b != a) {
                        int p = par[a][b].fi;
                        int idx = par[a][b].se;
                        ans[idx] = q[i].fi;
                        b = p;
                }
        }
        for (int i = 0; i < m; i++) {
                int a = q[i].se.fi;
                int b = q[i].se.se;
                int mn = 1000000;
                while (b != a) {
                        int p = par[a][b].fi;
                        int idx = par[a][b].se;
                        ckmin(mn, ans[idx]);
                        b = p;
                }
                if (mn != q[i].fi) {
                        cout << "-1\n";
                        return;
                }
        }
        for (int i = 0; i < n - 1; i++) {
                cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
}

int32_t main()
{
        Aufan
        slv
        return 0;
}