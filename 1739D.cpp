#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
vector<vector<int>> adj(222222);
vector<int> depth(222222);
int dfs(int x, int limit) {
        depth[x] = 0;
        int res = 0;
        for (auto z : adj[x]) {
                res += dfs(z, limit);
                if (limit <= depth[z] + 1 && x != 1) {
                        res++;
                } else {
                        depth[x] = max(depth[x], depth[z] + 1);
                }
        }
        return res;
}
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;
                vector<int> par(n+5);
                par[1] = 1;
                for (int i = 2; i <= n; i++) {
                        cin >> par[i];
                        adj[par[i]].push_back(i);
                }
                int l = 1;
                int r = 1 << 20;
                int pos;
                while (l <= r) {
                        int m = (l + r)/2;
                        if (dfs(1, m) <= k) {
                                pos = m;
                                r = m - 1;
                        } else {
                                l = m + 1;
                        }
                }
                cout << pos << '\n';
                for (int i = 1; i <= n; i++) {
                        adj[i].clear();
                }
        }
        return 0;
}