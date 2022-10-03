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
        int n, k;
        cin >> n >> k;
        // subsoal 8
        set<int> diag1;
        set<int> diag2;
        for (int i = 0; i < k; i++) {
                int a, b;
                cin >> a >> b;
                diag1.insert(a + b - 1);
                diag2.insert(a - b + n);
        }
        int ans = 0;
        vector<int> d1ganjil, d1genap, d2ganjil, d2genap;
        for (auto z : diag1) {
                if (z%2) {
                        d1ganjil.push_back(z);
                } else {
                        d1genap.push_back(z);
                }
                ans += min(z - 0, 2*n - z);
        }
        for (auto z : diag2) {
                if (z%2) {
                        d2ganjil.push_back(z);
                } else {
                        d2genap.push_back(z);
                }
                ans += min(z - 0, 2*n - z);
        }
        for (auto z : d1ganjil) {
                if (n%2) {
                        int zx = (z + 1)/2;
                        int mn = n - 2*min(zx - 1, n - zx);
                        int mx = n + 2*min(zx - 1, n - zx);
                        int lf = -1;
                        int rg = -1;
                        int l = 0;
                        int r = d2ganjil.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2ganjil[m] >= mn) {
                                        lf = m;
                                        r = m - 1;
                                } else {
                                        l = m + 1;
                                }
                        }
                        l = 0;
                        r = d2ganjil.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2ganjil[m] <= mx) {
                                        rg = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        if (lf != -1) {
                                ans -= rg - lf + 1;
                        }
                } else {
                        int zx = (z + 1)/2;
                        int mn = n - 2*min(zx - 1, n - zx);
                        int mx = n + 2*min(zx - 1, n - zx);
                        int lf = -1;
                        int rg = -1;
                        int l = 0;
                        int r = d2genap.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2genap[m] >= mn) {
                                        lf = m;
                                        r = m - 1;
                                } else {
                                        l = m + 1;
                                }
                        }
                        l = 0;
                        r = d2genap.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2genap[m] <= mx) {
                                        rg = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        if (lf != -1) {
                                ans -= rg - lf + 1;
                        }
                }
        }
        for (auto z : d1genap) {
                if (n%2) {
                        int zx = z/2;
                        int mn = n - (2*min(zx - 0, n - zx) - 1);
                        int mx = n + (2*min(zx - 0, n - zx) - 1);
                        int lf = -1;
                        int rg = -1;
                        int l = 0;
                        int r = d2genap.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2genap[m] >= mn) {
                                        lf = m;
                                        r = m - 1;
                                } else {
                                        l = m + 1;
                                }
                        }
                        l = 0;
                        r = d2genap.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2genap[m] <= mx) {
                                        rg = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        if (lf != -1) {
                                ans -= rg - lf + 1;
                        }
                } else {
                        int zx = z/2;
                        int mn = n - (2*min(zx - 0, n - zx) - 1);
                        int mx = n + (2*min(zx - 0, n - zx) - 1);
                        int lf = -1;
                        int rg = -1;
                        int l = 0;
                        int r = d2ganjil.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2ganjil[m] >= mn) {
                                        lf = m;
                                        r = m - 1;
                                } else {
                                        l = m + 1;
                                }
                        }
                        l = 0;
                        r = d2ganjil.size() - 1;
                        while (l <= r) {
                                int m = (l + r)/2;
                                if (d2ganjil[m] <= mx) {
                                        rg = m;
                                        l = m + 1;
                                } else {
                                        r = m - 1;
                                }
                        }
                        if (lf != -1) {
                                ans -= rg - lf + 1;
                        }
                }
        }
        cout << n*n - ans << '\n';
        // subsoal 7
        // pair<int, int> a, b;
        // cin >> a.fi >> a.se >> b.fi >> b.se;
        // if (a == b) {
        //         cout << n*n - (min(a.fi - 1, a.se - 1) + min(a.fi - 1, n - a.se) + min(n - a.fi, a.se - 1) + min(n - a.fi, n - a.se) + 1) << '\n';
        //         return 0;
        // }
        // if (a.fi + a.se == b.fi + b.se) {
        //         int ans = 0;
        //         ans += min(a.fi - 1, a.se - 1);
        //         ans += min(n - a.fi, n - a.se);
        //         ans += min(b.fi - 1, b.se - 1);
        //         ans += min(n - b.fi, n - b.se);
        //         ans += min(a.fi - 1, n - a.se);
        //         ans += min(n - a.fi, a.se - 1);
        //         ans += 1;
        //         cout << n*n - ans << '\n';
        // } else if (a.se - a.fi == b.se - b.fi){
        //         int ans = 0;
        //         ans += min(a.fi - 1, n - a.se);
        //         ans += min(n - a.fi, a.se - 1);
        //         ans += min(b.fi - 1, n - b.se);
        //         ans += min(n - b.fi, b.se - 1);
        //         ans += min(a.fi - 1, a.se - 1);
        //         ans += min(n - a.fi, n - a.se);
        //         ans += 1;
        //         cout << n*n - ans << '\n';
        // } else {
        //         int ans = 0; 
        //         ans += min(a.fi - 1, a.se - 1);
        //         ans += min(a.fi - 1, n - a.se);
        //         ans += min(n - a.fi, a.se - 1);
        //         ans += min(n - a.fi, n - a.se);
        //         ans += min(b.fi - 1, b.se - 1);
        //         ans += min(b.fi - 1, n - b.se);
        //         ans += min(n - b.fi, b.se - 1);
        //         ans += min(n - b.fi, n - b.se);
        //         ans += 2;
        //         int aa = b.fi + b.se - a.fi - a.se;
        //         int bb = a.fi + a.se - b.fi - b.se;
        //         if (aa > 0) {
        //                 if (aa%2 == 0) {
        //                         int z = aa/2;
        //                         if (b.fi - z >= 1 && b.se - z >= 1) {
        //                                 ans -= 1;
        //                         }
        //                         if (a.fi + z <= n && a.se + z <= n) {
        //                                 ans -= 1;
        //                         }
        //                 }
        //         } else {
        //                 if (bb%2 == 0) {
        //                         int z = bb/2;
        //                         if (a.fi - z >= 1 && a.se - z >= 1) {
        //                                 ans -= 1;
        //                         }
        //                         if (b.fi + z <= n && b.se + z <= n) {
        //                                 ans -= 1;
        //                         }
        //                 }
        //         }
        //         cout << n*n - ans << '\n';
        // }
        // subsoal 1, 2, 3, 4, 5
        // vector<vector<bool>> v(n+5, vector<bool>(n+5, true));
        // for (int i = 0; i < k; i++) {
        //         int x, y;
        //         cin >> x >> y;
        //         for (int j = 0; j < n; j++) {
        //                 if (x - j >= 1 && y - j >= 1) {
        //                         v[x-j][y-j] = false;
        //                 }
        //                 if (x - j >= 1 && y + j <= n) {
        //                         v[x-j][y+j] = false;
        //                 }
        //                 if (x + j <= n && y - j >= 1) {
        //                         v[x+j][y-j] = false;
        //                 }
        //                 if (x + j <= n && y + j <= n) {
        //                         v[x+j][y+j] = false;
        //                 }
        //         }
        // }
        // int ans = 0;
        // for (int i = 1; i <= n; i++) {
        //         for (int j = 1; j <= n; j++) {
        //                 if (v[i][j]) {
        //                         ans++;
        //                 }
        //         }
        // }
        // cout << ans << '\n';
        return 0;
}