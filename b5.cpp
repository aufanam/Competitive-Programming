#include <bits/stdc++.h>

using namespace std;

const long long MOD = (long long)1e9 + 7;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long long n, m;
        cin >> n >> m;
        vector<vector<long long>> v(n+5, vector<long long>(m+5));
        for (long long i = 1; i <= n; i++) {
                for (long long j = 1; j <= m; j++) {
                        cin >> v[i][j];
                }
        }
        vector<vector<long long>> dp(n+5, vector<long long>(m+5, 0));
        if (n == 1 && m == 1) {
                cout << "1\n";
                return 0;
        }
        if (v[1][1] == 0) {
                cout << "0\n";
                return 0;
        }
        dp[1][1] = 1;
        for (long long i = 1; i <= n; i++) {
                for (long long j = 1; j <= m; j++) {
                        for (long long ki = 1; ki <= i; ki++) {
                                for (long long kj = 1; kj <= j; kj++) {
                                        if (!(ki == i && kj == j)) {
                                                if (i <= ki + v[ki][kj] && j <= kj + v[ki][kj]) {
                                                        dp[i][j] = (dp[i][j] + dp[ki][kj])%MOD;
                                                }
                                        }
                                }
                        }
                }
        }
        cout << dp[n][m] << '\n';
        return 0;
}