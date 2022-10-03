#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int MOD = 1e9+7;
int dp[2][3003][2];
int prefh[3003][3003][2];
int prefd[3003][3003][2];
int pos[3003][2];
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n, m, k;
        string s;
        cin >> n >> m >> k >> s;
        int lsta = 0;
        int lstb = 0;
        s = '0' + s;
        for (int i = 1; i <= n; i++) {
                lsta = (s[i] == 'A' ? i : lsta);
                lstb = (s[i] == 'B' ? i : lstb);
                pos[i][0] = lsta;
                pos[i][1] = lstb;
        }
        dp[0][0][0] = 1;
        dp[0][0][1] = 1;
        prefh[0][0][0] = 1;
        prefh[0][0][1] = 1;
        prefd[0][0][0] = 1;
        prefd[0][0][1] = 1;
        for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= k; j++) {
                        for (int x = 0; x < 2; x++) {
                                int zx = pos[i][x^1];
                                if (zx - 1 > i - m) {
                                        dp[i%2][j][x] = (prefh[i-1][j][x^1] - (zx == 0 ? 0 : prefh[zx-1][j][x^1]) + MOD)%MOD;
                                } else {
                                        dp[i%2][j][x] = ((prefh[i-1][j][x^1] + (i >= m ? j > 0 ? prefd[i-m][j-1][x^1] - prefh[i-m][j][x^1] : - prefh[i-m][j][x^1] : 0) + MOD)%MOD - (zx > 0 && j - 1 >= i - m - zx + 1 && i - m >= zx - 1 ? prefd[zx-1][j-1-i+m+zx-1][x^1] : 0) + MOD)%MOD;
                                }
                                prefh[i][j][x] = (dp[i%2][j][x] + prefh[i-1][j][x])%MOD;
                                prefd[i][j][x] = (dp[i%2][j][x] + (j > 0 ? prefd[i-1][j-1][x] : 0))%MOD;
                        }
                }
        }
        cout << (dp[n%2][k][0] + dp[n%2][k][1])%MOD << '\n';
        return 0;
}