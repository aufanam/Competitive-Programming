#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()

using namespace std;
const int INFF = 1e18;
int n, k;
int zz;
vector<vector<int>> dp(2, vector<int>(1111, -INFF));
vector<vector<int>> SparseMaximum(1111, vector<int>(15));
void buildsparsemax() {
        for (int i = 0; i < n; i++) {
                SparseMaximum[i][0] = dp[zz][i+1];
        }
        for (int j = 1; (1ll << j) <= n; j++) {
                for (int i = 0; (i + (1ll << j) - 1) < n; i++) {
                        SparseMaximum[i][j] = max(SparseMaximum[i][j-1], SparseMaximum[i + (1ll << (j - 1))][j-1]);
                }
        }
}
int querymax(int l, int r) {
        int j = (int)(log2(r - l + 1));
        return max(SparseMaximum[l][j], SparseMaximum[r - (1 << j) + 1][j]);
}

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> n >> k;
        vector<int> b(n+5);
        vector<vector<int>> a(n+5, vector<int>(n+5, 0));
        vector<int> left(k+5);
        vector<int> right(k+5);
        vector<vector<pair<int, int>>> rng(k+5, vector<pair<int, int>>(n+5));
        for (int i = 1; i <= n; i++) cin >> b[i];
        for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                        cin >> a[i][j];
                        if (i == j) a[i][j] = a[i][j-1];
                }
        }
        for (int i = 1; i <= k; i++) cin >> left[i];
        for (int i = 1; i <= k; i++) cin >> right[i];
        for (int i = 1; i <= k; i++) {
                for (int j = 1; j <= n; j++) {
                        int l = 1;
                        int r = n;
                        int lf = -1;
                        int rg = -1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (a[j][m] >= left[i]) {
                                        lf = m;
                                        r = m - 1;
                                } else {
                                        l = m + 1;
                                }
                        }
                        l = 1;
                        r = n;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (a[j][m] <= right[i]) {
                                        rg = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        if (lf > rg) rng[i][j] = {-1, -1};
                        else rng[i][j] = {lf, rg};
                }
        }
        // for (int i = k; i >= 1; i--) {
        //         for (int j = 1; j <= n; j++) {
        //                 cout << "[" << rng[i][j].fi << ", " << rng[i][j].se << "] ";
        //         }
        //         cout << '\n';
        // }
        for (int i = 1; i <= n; i++) {
                dp[(k+1)%2][i] = b[i];
        }
        zz = (k + 1)%2;
        buildsparsemax();
        for (int i = k; i >= 1; i--) {
                for (int j = 1; j <= n; j++) {
                        dp[i%2][j] = -INFF;
                }
                for (int j = 1; j <= n; j++) {
                        int lf = rng[i][j].fi;
                        int rg = rng[i][j].se;
                        if (lf == -1) continue;
                        if (lf <= j && j <= rg) {
                                int rg2 = j - 1;
                                int lf2 = j + 1;
                                if (lf <= rg2) {
                                        dp[i%2][j] = max(dp[i%2][j], querymax(lf-1, rg2-1) + b[j]);
                                }
                                if (lf2 <= rg) {
                                        dp[i%2][j] = max(dp[i%2][j], querymax(lf2-1, rg-1) + b[j]);
                                }
                        } else {
                                dp[i%2][j] = max(dp[i%2][j], querymax(lf-1, rg-1) + b[j]);
                        }
                }
                zz = (i%2);      
                buildsparsemax();
        }
        // for (int i = k; i >= 1; i--) {
        //         for (int j = 1; j <= n; j++) {
        //                 cout << dp[i][j] << ' ';
        //         }
        //         cout << '\n';
        // }
        cout << (dp[1][1] < 0 ? -1 : dp[1][1]) << '\n';
        return 0;
}