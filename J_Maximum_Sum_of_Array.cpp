#include <bits/stdc++.h>
#define int                                                             long long
#define slv                                                             solve();
#define Aufan                                                           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define all(x)                                                          x.begin(), x.end()
#define N                                                               1000005
using namespace std;
const int INFF=4e18;
void solve() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> dp(N, vector<int>(2, -INFF));
        vector<int> v(n+5, -INFF);
        dp[0][0] = 0;
        for (int i = 1; i <= n; i++) cin >> v[i];
        for (int i = 1; i <= n; i++) {
                dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
                if (i >= m) {
                        dp[i][1] = max(dp[i-m][1], dp[i-m][0]) + v[i];
                } else {
                        dp[i][1] = v[i];
                }
        }
        if (*max_element(all(v)) < 0) cout << *max_element(all(v)) << '\n';
        else cout << max(dp[n][0], dp[n][1]) << '\n';
        return;
}

int32_t main()
{
        Aufan
        slv
        return 0;
}