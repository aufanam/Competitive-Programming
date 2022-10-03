#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
using namespace std;
const int INF = 1e18;

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, l, k;
        cin >> n >> l >> k;
        vector<int> v(n+5);
        vector<int> time(n+5);
        vector<vector<int>> dp(n+5, vector<int>(n+5, INF)); // ke i dan hapus k
        for (int i = 0; i < n; i++) {
                cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
                cin >> time[i];
        }
        v[n] = l;
        dp[0][0] = 0;
        for (int i = 1; i <= n; i++) {
                dp[i][0] = dp[i-1][0] + (v[i] - v[i-1])*time[i-1];
        }
        for (int i = 0; i < n; i++) {
                for (int j = 0; j <= k; j++) {
                        if (i >= j) {
                                for (int z = i + 1; z <= n; z++) {
                                        dp[z][(z - i + 1 - 2) + j] = min(dp[z][(z - i + 1 - 2) + j], dp[i][j] + (v[z] - v[i])*time[i]);
                                }
                        }
                }
        }
        int ans = INF;
        for (int i = 0; i <= k; i++) {
                ans = min(ans, dp[n][i]);
        }
        cout << ans << '\n';
        return 0;
}