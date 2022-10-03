#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
using namespace std;
const int MOD = 1e9 + 7;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin >> n;
        vector<vector<int>> v(n+5, vector<int>(n+5));
        for (int i = 1; i <= n - 1; i++) {
                for (int j = 1; j <= n; j++) {
                        cin >> v[i][j];
                }
        }
        vector<int> need(n+5, 0);
        for (int i = 1; i <= n; i++) {
                vector<bool> vis(n+5, false);
                for (int j = 1; j <= n - 1; j++) {
                        vis[v[j][i]] = true;
                }
                vector<int> zz;
                for (int i = 1; i <= n; i++) {
                        if (!vis[i]) {
                                zz.push_back(i);
                        }
                }
                if (zz.size() == 1) {
                        need[zz.front()]++;
                }
        }
        int ans = 1;
        int cnt = n;
        for (int i = 1; i <= n; i++) {
                if (need[i] > 0) {
                        cnt--;
                }
        }
        for (int i = 1; i <= n; i++) {
                if (need[i] > 0) {
                        ans = (ans * need[i])%MOD;
                }
        }
        for (int i = 1; i <= cnt; i++) {
                ans = (ans * i)%MOD;
        }
        cout << (n - cnt) << ' ' << ans << '\n';
        return 0;
}