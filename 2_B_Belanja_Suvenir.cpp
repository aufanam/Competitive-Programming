#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string subsoal;
        cin >> subsoal;
        int n;
        cin >> n;
        vector<int> v(n+5);
        for (int i = 1; i <= n; i++) {
                cin >> v[i];
        }
        vector<bool> vis(2222222, false);
        vector<vector<int>> sz(2222222);
        int l = 1, r = 1;
        while (r <= n) {
                if (r == n) {
                        if (vis[v[r]]) {
                                while (v[l] != v[r]) {
                                        vis[v[l]] = false;
                                        l++;
                                }
                                l++;
                                for (int i = l; i <= r; i++) {
                                        sz[r - i + 1].push_back(i);
                                }
                                break;
                        } else {
                                for (int i = l; i <= r; i++) {
                                        sz[r - i + 1].push_back(i);
                                }
                                break;
                        }
                } else {
                        if (vis[v[r]]) {
                                while (v[l] != v[r]) {
                                        vis[v[l]] = false;
                                        l++;
                                }
                                l++;
                                sz[r - l + 1].push_back(l);
                                r++;
                        } else {
                                sz[r - l + 1].push_back(l);
                                vis[v[r]] = true;
                                r++;
                        }
                }
        }
        int ans = 0;
        pair<pair<int, int>, pair<int, int>> pr;
        for (int i = 1; i <= n; i++) {
                if (sz[i].size() >= 2) {
                        int mx = sz[i].front() + i - 1;
                        if (mx < sz[i].back()) {
                                if (i*2 > ans) {
                                        ans = i*2;
                                        pr = {{sz[i].front(), sz[i].front() + i - 1}, {sz[i].back(), sz[i].back() + i - 1}};
                                }
                        }
                }
        }
        cout << pr.fi.fi << ' ' << pr.fi.se << ' ' << pr.se.fi << ' ' << pr.se.se << '\n';
        return 0;
}