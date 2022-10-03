#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;
int dp[2][17][18][19][20];
// bool m[20][20];
bitset<20> m[20];
int zz[20];
int ans = -400000, n, k, cok, i, j, cnt = 0;
short a, b, c, d, e, f, t, x;
int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> n >> k;
        cin >> zz[0] >> zz[1] >> zz[2] >> zz[3];
        for (a = 0; a < 2; ++a) {
                for (b = 0; b < k; ++b) {
                        for (c = b + 1; c < k; ++c) {
                                for (d = c + 1; d < k; ++d) {
                                        for (e = d + 1; e < k; ++e) {
                                                dp[a][b][c][d][e] = -400000;
                                        }
                                }
                        }
                }
        }
        sort(zz+0, zz+4);
        --zz[0];
        --zz[1];
        --zz[2];
        --zz[3];
        dp[0][zz[0]][zz[1]][zz[2]][zz[3]] = 0;
        zz[0] = 0;
        zz[1] = 0;
        zz[2] = 0;
        zz[3] = 0;
        for (i = 0; i < k; ++i) {
                for (j = 0; j < k; ++j) {
                        char c;
                        cin >> c;
                        if (c == '1') m[i][j] = 1;
                        else m[i][j] = 0;
                }
        }
        for (i = 1; i <= n; ++i) {
                cin >> t;
                if (t == 1) {
                        cin >> x;
                        --x;
                        ++zz[x];
                } else {
                        ++cnt;
                        for (a = 0; a < k; ++a) {
                                for (b = a + 1; b < k; ++b) {
                                        for (c = b + 1; c < k; ++c) {
                                                for (d = c + 1; d < k; ++d) {
                                                        cok = 0;
                                                        for (f = 0; f < k; ++f) {
                                                                if (m[a][f] || m[b][f] || m[c][f] || m[d][f]) {
                                                                        cok += zz[f];
                                                                }
                                                        }
                                                        dp[cnt%2][a][b][c][d] = max(dp[cnt%2][a][b][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        for (e = 0; e < k; ++e) {
                                                                if (a == e || b == e || c == e || d == e) continue;
                                                                if (e < a) {
                                                                        dp[cnt%2][e][a][b][d] = max(dp[cnt%2][e][a][b][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][e][a][c][d] = max(dp[cnt%2][e][a][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][e][b][c][d] = max(dp[cnt%2][e][b][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][e][a][b][c] = max(dp[cnt%2][e][a][b][c], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                } else if (e < b) {
                                                                        dp[cnt%2][a][e][b][c] = max(dp[cnt%2][a][e][b][c], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][e][b][d] = max(dp[cnt%2][a][e][b][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][e][b][c][d] = max(dp[cnt%2][e][b][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][e][c][d] = max(dp[cnt%2][a][e][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                } else if (e < c) {
                                                                        dp[cnt%2][b][e][c][d] = max(dp[cnt%2][b][e][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][b][e][c] = max(dp[cnt%2][a][b][e][c], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][e][c][d] = max(dp[cnt%2][a][e][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][b][e][d] = max(dp[cnt%2][a][b][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                } else if (e < d) {
                                                                        dp[cnt%2][a][c][e][d] = max(dp[cnt%2][a][c][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][b][c][e][d] = max(dp[cnt%2][b][c][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][b][e][d] = max(dp[cnt%2][a][b][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][b][c][e] = max(dp[cnt%2][a][b][c][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                } else {
                                                                        dp[cnt%2][a][b][d][e] = max(dp[cnt%2][a][b][d][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][c][d][e] = max(dp[cnt%2][a][c][d][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][b][c][d][e] = max(dp[cnt%2][b][c][d][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                        dp[cnt%2][a][b][c][e] = max(dp[cnt%2][a][b][c][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                        for (j = 0; j < k; ++j) zz[j] = 0;
                }
        }
        ++cnt;
        for (a = 0; a < k; ++a) {
                for (b = a + 1; b < k; ++b) {
                        for (c = b + 1; c < k; ++c) {
                                for (d = c + 1; d < k; ++d) {
                                        cok = 0;
                                        for (f = 0; f < k; ++f) {
                                                if (m[a][f] || m[b][f] || m[c][f] || m[d][f]) {
                                                        cok += zz[f];
                                                }
                                        }
                                        dp[cnt%2][a][b][c][d] = max(dp[cnt%2][a][b][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                        for (e = 0; e < k; ++e) {
                                                if (a == e || b == e || c == e || d == e) continue;
                                                if (e < a) {
                                                        dp[cnt%2][e][a][b][d] = max(dp[cnt%2][e][a][b][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][e][a][c][d] = max(dp[cnt%2][e][a][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][e][b][c][d] = max(dp[cnt%2][e][b][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][e][a][b][c] = max(dp[cnt%2][e][a][b][c], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                } else if (e < b) {
                                                        dp[cnt%2][a][e][b][c] = max(dp[cnt%2][a][e][b][c], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][e][b][d] = max(dp[cnt%2][a][e][b][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][e][b][c][d] = max(dp[cnt%2][e][b][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][e][c][d] = max(dp[cnt%2][a][e][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                } else if (e < c) {
                                                        dp[cnt%2][b][e][c][d] = max(dp[cnt%2][b][e][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][b][e][c] = max(dp[cnt%2][a][b][e][c], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][e][c][d] = max(dp[cnt%2][a][e][c][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][b][e][d] = max(dp[cnt%2][a][b][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                } else if (e < d) {
                                                        dp[cnt%2][a][c][e][d] = max(dp[cnt%2][a][c][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][b][c][e][d] = max(dp[cnt%2][b][c][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][b][e][d] = max(dp[cnt%2][a][b][e][d], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][b][c][e] = max(dp[cnt%2][a][b][c][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                } else {
                                                        dp[cnt%2][a][b][d][e] = max(dp[cnt%2][a][b][d][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][c][d][e] = max(dp[cnt%2][a][c][d][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][b][c][d][e] = max(dp[cnt%2][b][c][d][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                        dp[cnt%2][a][b][c][e] = max(dp[cnt%2][a][b][c][e], dp[(cnt+1)%2][a][b][c][d] + cok);
                                                }
                                        }
                                }
                        }
                }
        }
        for (a = 0; a < k; ++a) {
                for (b = a + 1; b < k; ++b) {
                        for (c = b + 1; c < k; ++c) {
                                for (d = c + 1; d < k; ++d) {
                                        ans = max(ans, dp[cnt%2][a][b][c][d]);
                                }
                        }
                }
        }
        cout << ans << '\n';
        return 0;
}