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
        int n;
        cin >> n;
        vector<int> v(n+5);
        for (int i = 1; i <= n; i++) {
                cin >> v[i];
        }
        vector<vector<int>> dp(n+5, vector<int>(5));
        for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= 4; j++) {
                        dp[i][j] = dp[i-1][j];
                }
                if (v[i] == 1) {
                        dp[i][1] = max(dp[i][1], dp[i-1][0] + 1);
                        dp[i][1] = max(dp[i][1], dp[i-1][1] + 1);
                        dp[i][3] = max(dp[i][3], dp[i-1][2] + 1);
                        dp[i][3] = max(dp[i][3], dp[i-1][3] + 1);
                } else {
                        dp[i][2] = max(dp[i][2], dp[i-1][1] + 1);
                        dp[i][2] = max(dp[i][2], dp[i-1][2] + 1);
                        dp[i][4] = max(dp[i][4], dp[i-1][3] + 1);
                        dp[i][4] = max(dp[i][4], dp[i-1][4] + 1);
                }
        }
        cout << max({dp[n][1], dp[n][2], dp[n][3], dp[n][4]}) << '\n';
        return 0;
}