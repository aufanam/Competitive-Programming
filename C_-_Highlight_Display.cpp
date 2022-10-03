#include <bits/stdc++.h>

using namespace std;

int n;
const long long INF = 1e9 + 7;
int main()
{
        vector<vector<pair<long long, long long>>> dp(3333, vector<pair<long long, long long>>(4, {INF, -1}));
        vector<long long> sz(3333);
        vector<long long> rt(3333);
        cin >> n;
        for (long long i = 1; i <= n; i++) cin >> sz[i];
        for (long long i = 1; i <= n; i++) cin >> rt[i];
        dp[0][0] = {0, -1};
        for (long long i = 1; i <= n; i++) {
                for (long long j = 0; j < i; j++) {
                        for (long long k = 1; k <= 3; k++) {
                                if (sz[i] > dp[j][k-1].second && dp[j][k-1].first + rt[i] < dp[i][k].first) {
                                        dp[i][k] = {dp[j][k-1].first + rt[i], sz[i]};
                                }
                        }
                }
        }
        // for (long long i = 0; i <= 3; i++) {
        //         for (long long j = 1; j <= n; j++) {
        //                 cout << dp[j][i].first << ' ';
        //         }
        //         cout << '\n';
        // }
        // for (long long i = 0; i <= 3; i++) {
        //         for (long long j = 1; j <= n; j++) {
        //                 cout << dp[j][i].second << ' ';
        //         }
        //         cout << '\n';
        // }
        long long ans = INF;
        for (long long i = 3; i <= n; i++) {
                ans = min(ans, dp[i][3].first);
        }
        if (ans == INF) cout << "-1\n";
        else cout << ans << '\n';
        return 0;
}