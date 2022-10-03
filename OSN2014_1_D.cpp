#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
const int INF = 1e18;
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
        sort(v.begin() + 1, v.begin() + n + 1);
        vector<int> pref(n+5);
        pref[0] = 0;
        for (int i = 1; i <= n; i++) {
                pref[i] = pref[i-1] + v[i];
        }
        vector<bool> vis(2222222, false);
        int ans = INF;
        for (int i = 1; i <= 1000000; i+=2) {
                if (vis[i]) continue;
                set<int> buset;
                int z = i;
                while (true) {
                        buset.insert(z);
                        vis[z] = true;
                        z *= 2;
                        if (z > 2000000) break;
                }
                int res = 0;
                int cnt = 0;
                for (auto z : buset) {
                        int mx = 0;
                        int l = 0;
                        int r = n;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (v[m] <= z) {
                                        mx = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        res += ((mx - cnt)*z - (pref[mx] - pref[cnt]));
                        cnt = mx;
                }
                ans = min(ans, res);
        }
        cout << ans << '\n';
        return 0;
}